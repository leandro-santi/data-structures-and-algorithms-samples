## Alocação de Memória

### Áreas de Memória

* A **_stack_** (pilha) e a **_heap_** (monte) são duas áreas principais de alocação de memória em um programa de computador.

* Características da **_stack_**:

    * A _stack_ é uma região de memória usada para armazenar informações sobre funções em execução e suas variáveis locais.
    * Ela opera de maneira organizada e eficiente, seguindo um modelo de "último a entrar, primeiro a sair" (LIFO, Last-In-First-Out). Isso significa que a última função chamada é a primeira a ser concluída.
    * As variáveis locais das funções são alocadas na _stack_. Elas são criadas quando a função é chamada e destruídas quando a função é concluída.
    * O tamanho da _stack_ é geralmente limitado e estático. O espaço alocado para a _stack_ é definido em tempo de compilação ou execução e é compartilhado por todas as funções em execução.
    * A _stack_ é geralmente mais rápida em termos de acesso à memória, pois a alocação e a desalocação de variáveis são simples operações de incremento e decremento de ponteiros.

* Características da **_heap_**:

    * A _heap_ é uma área de memória usada para alocação dinâmica de dados. Ela é usada para armazenar objetos que não têm tempo de vida definido no escopo de uma função.
    * A alocação na _heap_ é dinâmica e pode ser feita e desfeita em tempo de execução. Isso permite a criação de objetos com tempo de vida que não está limitado ao escopo da função.
    * A _heap_ é tipicamente maior e não tem um tamanho fixo. O espaço na _heap_ é alocado sob demanda e pode crescer conforme necessário (até que a memória do sistema seja esgotada).
    * O acesso à memória na _heap_ pode ser um pouco mais lento, já que a alocação e a desalocação de memória envolvem alocação dinâmica e liberação de recursos.

* Em resumo, a _stack_ é usada para armazenar informações relacionadas à execução de funções, incluindo variáveis locais, e é eficiente, mas limitada em tamanho. A _heap_ é usada para alocar dados dinamicamente e tem um tamanho dinâmico, mas com um custo potencialmente mais alto em termos de acesso à memória.

* **É importante lembrar** que a divisão entre a _stack_ e a _heap_ na memória é uma abstração criada para facilitar o gerenciamento de memória e o acesso aos dados em um programa. Na realidade, essas duas áreas não são necessariamente separadas fisicamente, mas são gerenciadas pelo sistema operacional e pela linguagem de programação.

### Alocação Estática

* Na alocação estática de memória, o programador não precisa se preocupar em reservar memória para seus dados.

* Do mesmo modo, o programador não tem controle sobre o tempo de vida dessas variáveis.

* A quantidade de memória necessária para armazenar suas variáveis é automaticamente reservada na **_stack_**.

* A **_stack_** guarda os dados alocados dentro dos escopos de funções: variáveis locais, parâmetros, retorno de funções e endereços de outras áreas de código. Nela, as intruções e os dados vão sendo empilhados, e o desempilhamento ocorre automaticamente após a execução.

* Nesse tipo de alocação, os dados são organizados sequencialmente na memória do computador (como os **_arrays_**).

* Toda vez que se passa variáveis de tipos primitivos como argumento de uma função ela é duplicada na memória **(Passagem por valor)**.

* A quantidade total de memória utilizada pelo programa é previamente conhecida e não pode ser mudada (não é possível redimensionar a memória).

* As variáveis são alocadas considerando toda a memória que seu tipo necessita e não consideram a quantidade que seria realmente necessária na execução do programa. Assim podemos ter espaços alocados na memória sem utilização.

* As variáveis são empilhadas na **_stack_** a medida que são declaradas.

~~~C
int sum(int a, int b){ // Stack([a = 2 | b = 3], [y = 3 | x = 2])
    int c = a + b; // Stack([c = 5 | a = 2 | b = 3], [z | y = 3 | x = 2])
    
    return c;
}

int main(){
    int x = 2; // Stack([x = 2])
    int y = 3; // Stack([y = 3 | x = 2])
    int z = sum(x, y); // return = Stack([z = 5 | y = 3 | x = 2])

    printf("Sum = %d\n", z);

    return 0;
}
~~~

* No código acima, as variáveis são empilhadas na **_stack_** a medida que são declaradas na **_main_**. Ao correr uma chamada de função **_sum_**, cria-se uma nova região na **_stack_** com os parâmetros locais. Variáveis declaradas dentro de funções são empilhadas dentro de sua região da **_stack_**. Com o fim da execução da função ela é removida da **_stack_** (desempilhada) e seu valor é retornado para a variávei da **_main_**. A variável que recebe esse retorno é empilhada dentro da região da **_stack_** associada a **_main_**.

### Alocação Dinâmica

* Na alocação dinâmica de memória, o programador tem total controle sobre o tamanho e o tempo de vida das posições de memória dos seus dados.

* O programador é responsável por reservar a quantidade de memória necessária para seus dados.

* Área de memória chamada **_heap_**.

* A **_heap_** é uma área bem maior que a **_stack_**. É ideal para alocar muitos objetos / objetos grandes.

* Nela, os dados são alocados dinamicamente por meio da função **_malloc()_** (em C / C++) e só podem ser acessados por ponteiros.

* **_malloc()_**: (_memory allocation_) aloca um bloco contíguo (os bytes alocados estão lado a lado) de memória na **_heap_** do programa e retorna um ponteiro para o início desse bloco de memória.

~~~C
    // Aloca memória para armazenar um inteiro (4 bytes no geral ou 32 bits)
    ptr = (int *) malloc(sizeof(int));
~~~

* Além de ser mais lenta que a **_stack_**, a remoção de objetos da **_heap_** é manual.

* As variáveis armazenadas na **_heap_** não dependem do escopo e devem ser liberadas manualmente pelo programador.

* Se o programador esquecer de liberar a memória, um vazamento de memória (_memory leak_) pode ocorrer, significando que partes da memória que foram alocadas dinamicamente continuam ocupando espaço na memória do sistema, logo causando falhas.

* Nesse tipo de alocação os dados não necessitam estar organizados sequencialmente na memória.

* Os blocos de memória alocados podem estar dispersos na memória do computador (Estruturas Encadeadas utilizam desse contexto).

* Os blocos de memória podem ser alocados, realocados, liberados para diferentes objetivos durante a execução do programa.

* O acesso aos dados é feito por meio de **ponteiros** que apontam para os blocos de memória alocados, e não mais por variáveis.

~~~C
    int *ptr;
    ptr = (int *) malloc(sizeof(int));
    *ptr = 42; // Acesso aos dados por meio do ponteiro
~~~

~~~C
int main(){
    int x = 2;
    int *y = malloc(100); // Alocando 100 bytes de memória
    int *z = malloc(400); // Alocando 400 bytes de memória
    // Stack([z (Heap) | y (Heap) | x = 2])

    free(z);
    // Stack([z | y (Heap) | x = 2])

    return 0;
} // Heap([y])
~~~

* No código acima, as variáveis são empilhadas na **_stack_** à medida que são declaradas na **_main_**. Ao correr uma chamada da função **_malloc()_**, cria-se uma nova região de memória na **_heap_** e o ponteiro que aponta para essa região é empilhado na **_stack_**. As regiões na **_heap_** não são escolhidas de forma sequencial. Quando a função **_free()_** é chamada, a região associada a aquele ponteiro é liberada da **_heap_**, mas o ponteiro ainda continua na **_stack_**. Ao fim da **_main_**, todas as variáveis são removidas da **_stack_**. Porém, uma região da **_heap_** continua presente, pois ela foi alocada, mas nunca liberada.

### **Alocação Estática x Alocação Dinâmica**

Alocação Estática (_stack_)  | Alocação Dinâmica (_heap_)
----- | -----
Armazenado na memória RAM. | Armazenado na memória RAM.
Variáveis são liberadas automaticamente no fim do escopo **(variáveis locais de funções)**. | Variáveis não são liberadas quando o escopo termina e devem ser liberadas manualmente.
Alocação mais rápida que na **_heap_**. | Alocação mais lenta que na **_stack_**.
Implementado usando uma estrutura de dados do tipo pilha. | Blocos de dados são alocados sob demanda.
Armazena dados locais e endereços de retorno utilizados na passagem de parâmetros. | Pode sofrer fragmentação após sucessivas alocações e liberações de memória.
Os dados podem ser usados sem ponteiros. | Os dados são acessados por ponteiros.
Pode ocorrer _stack overflow_ quando for muito usada. | A alocação pode falhar se muita memória for solicitada.
É usada quando se sabe exatamente o quanto de espaço será alocado antes do tempo de compilação e esse espaço não é muito grande. | É usada quando não se sabe exatamente o quanto de espaço será alocado antes do tempo de compilação ou esse espaço é muito grande.
Geralmente possui um tamanho máximo predeterminado quando o programa inicia. | Responsável por vazamentos de memória.