# data-structures-and-algorithms-samples

* code samples and basic explanations
* This repository aims to help brazilian computer science students to get samples of data structure codes and algorithms.

* **As explicações em cada tópico abordado irão estar em pt-br.**

## Notes

### Estrutura de Dados

* A maneira como os dados são organizados dentro do computador garante a manipulação eficiente deles.

* **Estrutura de Dados** é a forma como decidimos armazenar e organizar os dados dentro do computador, assim atendendo requisitos de processamento.

* A escolha correta de uma estrutura para organizar os dados permite otimizar o seu uso, tornando um problema complexo mais simples de resolver.

* Uma estrutura de dados é um relacionamento lógico entre diferentes tipos de dados, visando a resolução de determinado problema de forma eficiente.

* A organização de forma coerente dos dados permite a diminuição do custo de execução de um algoritmo em termos de tempo de execução, consumo de memória ou em ambos.


### Algoritmos 

* **Algoritmo** é uma sequência simples e objetiva de instruções para solucionar um determinado problema. 

* Cara instrução é uma informação que indica ao computador uma ação básica a ser executada.

* A sequência de instruções que define um algoritmo deve ser sempre finita (começo - meio - fim) e não pode ser ambígua (não deve permitir mais de uma interpretação de seu significado).

* Um algoritmo é um procedimento computacional composto de três partes:

    **1. Entrada de Dados:** São os dados informados pelo usuário.

    **2. Processamento de Dados:** São os procedimentos utilizados para chegar ao resultado. É responsável pela obtenção dos dados de saída com base nos dados de entrada.

    **3. Saída de Dados:** São os dados já processados.

* Um mesmo problema pode ser resolvido por vários algoritmos diferentes e se diferenciam pela maneira de como eles utilizam os recursos do computador (Algoritmos que dependem do tempo que demoram para serem executados x Algoritmos que dependem da quantidade de memória do computador).


### Alocação de Memória

##### Alocação Estática

* Na alocação estática de memória, o programador não precisa se preocupar em reservar memória para seus dados.

* Do mesmo modo, o programador não tem controle sobre o tempo de vida dessas variáveis.

* A quantidade de memória necessária para armazenar suas variáveis é automaticamente reservada na **_stack_**.

* A **_stack_** guarda os dados alocados dentro dos escopos de funções: variáveis locais, parâmetros, retorno de funções e endereços de outras áreas de código. Nela, as intruções e os dados vão sendo empilhados, e o desempilhamento ocorre automaticamente após a execução.

* Nesse tipo de alocação os dados são organizados sequencialmente na memória do computador (como os **_arrays_**).

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

#### Alocação Dinâmica

* Na alocação dinâmica de memória, o programador tem total controle sobre o tamanho e o tempo de vida das posições de memória dos seus dados.

* O programador é responsável por reservar a quantidade de memória necessária para seus dados. Área de memória chamada **_heap_**.

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

* O acesso aos dados é feito por meio de **ponteiros** que apontam para os blocos de memória alocados, e não mais variáveis.

~~~C
    int *ptr;
    ptr = (int *)malloc(sizeof(int));
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

#### Alocação Estática x Alocação Dinâmica

Alocação Estática (_stack_)  | Alocação Dinâmica (_heap_)
--------- | ------
Armazenado na memória RAM. | Armazenado na memória RAM.
Variáveis são liberadas automaticamente no fim do escopo **(variáveis locais de funções)**. | Variáveis não são liberadas quando o escopo termina e devem ser liberadas manualmente.
Alocação mais rápida que na **_heap_**. | Alocação mais lenta que na **_stack_**.
Implementado usando uma estrutura de dados do tipo pilha. | Blocos de dados são alocados sob demanda.
Armazena dados locais e endereços de retorno utilizados na passagem de parâmetros. | Pode sofrer fragmentação após sucessivas alocações e liberações de memória.
Os dados podem ser usados sem ponteiros. | Os dados são acessados por ponteiros.
Pode ocorrer _stack overflow_ quando for muito usada. | A alocação pode falhar se muita memória for solicitada.
É usada quando se sabe exatamente o quanto de espaço será alocado antes do tempo de compilação e esse espaço não é muito grande. | É usada quando não se sabe exatamente o quanto de espaço será alocado antes do tempo de compilação ou esse espaço é muito grande.
Geralmente possui um tamanho máximo predeterminado quando o programa inicia. | Responsável por vazamentos de memória.

