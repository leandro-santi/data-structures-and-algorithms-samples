# data-structures-and-algorithms-samples

Este repositório tem como objetivo ajudar estudantes brasileiros dos cursos de computação a obter amostras de código de estruturas de dados e algoritmos, e explicações simplificadas sobre os conceitos da área.

## Conceitos Introdutórios

### Estrutura de Dados

* A maneira como os dados são organizados dentro do computador garante a manipulação eficiente deles.

* **Estrutura de Dados** é a forma como decidimos armazenar e organizar os dados dentro do computador, assim atendendo requisitos de processamento.

* A escolha correta de uma estrutura para organizar os dados permite otimizar o seu uso, tornando um problema complexo mais simples de resolver.

* Uma estrutura de dados é um relacionamento lógico entre diferentes tipos de dados, visando a resolução de determinado problema de forma eficiente.

* A organização de forma coerente dos dados permite a diminuição do custo de execução de um algoritmo em termos de tempo de execução, consumo de memória ou em ambos.

### Algoritmos

* **Algoritmo** é uma sequência simples e objetiva de instruções para solucionar um determinado problema.

* Lembra uma receita, por exemplo, de bolo:
    
    * aqueça o forno;
    * unte uma forma;
    * numa bacia:
        * bata os ingredientes;
        * até virar um creme;
    * deite a massa na forma;
    * leve ao forno.

* Cada instrução é uma informação que indica ao computador uma ação básica a ser executada.

* A sequência de instruções que define um algoritmo deve ser sempre finita (começo - meio - fim) e não pode ser ambígua (não deve permitir mais de uma interpretação de seu significado).

* Um algoritmo é um procedimento computacional composto de três partes:

    1. **Entrada de Dados:** São os dados informados pelo usuário.
    2. **Processamento de Dados:** São os procedimentos utilizados para chegar ao resultado. É responsável pela obtenção dos dados de saída com base nos dados de entrada.
    3. **Saída de Dados:** São os dados já processados.

* Um mesmo problema pode ser resolvido por vários algoritmos diferentes e se diferenciam pela maneira de como eles utilizam os recursos do computador.

    * Algoritmos que dependem do tempo que demoram para serem executados x Algoritmos que dependem da quantidade de memória do computador.

### Alocação de Memória

#### Áreas de Memória

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

#### Alocação Estática

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

#### Alocação Dinâmica

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

#### **Alocação Estática x Alocação Dinâmica**

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

### Análise da Complexidade de Algoritmos

* Podemos fazer algoritmos mais eficientes? É a ***Análise de Algoritmos*** que responde essa questão.

* Algoritmos diferentes que resolvem um mesmo problema não necessariamente o fazem com a mesma eficiência.

* Essas diferenças de eficiência podem ser:

    1. Irrelevantes para um pequeno número de elementos processados.
    2. Crescer proporcionalmente com o número de elementos processados.

* **A complexidade computacional** é usada para medir e comparar a eficiência dos algoritmos. Ela indica o custo ao se aplicar um determinado algoritmo.

    * **custo = memória + tempo.**
    * A **memória** indica quanto de espaço o algoritmo vai consumir e o **tempo**, a duração de execução.

* Para analisar se um determinado algoritmo é eficiente, pode ser utilizar de uma **análise empírica** ou **análise matemática**.

#### Análise Empírica

* Na análise empírica, um algoritmo é analisado pela execução de seu programa correspondente.

* Logo, é a avaliação da execução do mesmo quando implementado.

* Isso envolve medir o tempo de execução e, em alguns casos, o uso de recursos, como memória, à medida que o algoritmo é executado com entradas de teste reais ou geradas aleatoriamente.

* Vantagens:

    * Avaliar o desempenho de uma determinada configuração de computador / linguagem.
    * Considerar custos não aparentes (Por exemplo, a memória alocada).
    * Comparar computadores.
    * Comparar linguagens.

* Desvantagens:

    * Necessidade de ter o algoritmo pronto e funcionando.
    * Resultado pode ser mascarado pelo _hardware_ ou _software_ utilizados.
    * Qual a natureza dos dados? Dados reais, aleatórios ou perversos (piores casos)?

#### Análise Matemática

* A medição do tempo gasto por um algoritmo pode ser feita de maneira independente do _hardware_ ou da linguagem usada na sua implementação.

* A **análise matemática** permite um estudo formal de um algoritmo ao nível de **ideia**.

* Faz uso de um computador idealizado (independente do **_hardware_**, tempo constante).

* É uma abordagem formal e teórica que busca entender o desempenho e o comportamento de algoritmos por meio de técnicas matemáticas.

* Ela é frequentemente usada para avaliar o tempo de execução e o uso de recursos, como memória, em função do **tamanho da entrada do algoritmo**

* Considera somente os **custos dominantes** do algoritmo. É o componente de um algoritmo que mais contribui para a sua complexidade temporal (tempo de execução) ou espacial (uso de memória) à medida que o tamanho da entrada aumenta.

~~~C
int SumArray(int arr[], int size) {
    int sum = 0;
    // Custo dominante é o loop for que itera por todos os elementos de um array e realiza alguma operação neles.
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}
~~~

* Identificar o custo dominante é importante na análise de algoritmos, pois ajuda a compreender qual parte do algoritmo tem o maior impacto no desempenho à medida que a entrada cresce.

* Detalhes de baixo nível, como a **linguagem de programação** utilizada, o **_hardware_** no qual o algoritmo é executado, ou o conjunto de instruções da CPU, são ignorados.

* Esse tipo de análise permite entender como um algoritmo se comporta à medida que o conjunto de dados de entrada cresce. Podendo assim expressar a relação entre o conjunto de dados de entrada e a quantidade de tempo necessária para processar esses dados.

##### Contando instruções de um algoritmo

* **Instrução simples** é uma instrução que pode ser executada diretamente pelo CPU, ou algo muito perto disso.

~~~C
int greater = arr[0], i; // Custo = 1 Instrução

for(i = 0; i < n; i++){ // Custo = 3 + 2n
    if(arr[i] >= greater){
        greater = arr[i];
    }
}
~~~

* No trecho de código acima é possível ser encontrado as seguintes instruções:

    1. Atribuição de um valor a uma variável;
    2. Acesso ao valor de determinado elemento do _array_;
    3. Comparação entre dois valores;
    4. Incremento de um valor;
    5. Operações aritméticas básicas.

* Por serem instruções simples, elas possuem todas o mesmo custo (1).

* No algoritmo, o comando de laço **_for_** é utilizado para percorrer o **_array_**. Porém, antes mesmo de percorrer o **_array_**, ele precisa ser inicializado ao custo de uma instrução (i = 0). Além disso, mesmo que o **_array_** tenha tamanho zero, ao menos uma comparação será executada (i < n), o que custa mais uma instrução **(2 instruções no total)**.

* Portanto, temos um total de duas instruções na inicialização do laço **_for_**. 

* Perceba que essas instruções serão executadas antes da primeira iteração do laço **_for_**.

* O custo para executar o comando de laço **_for_** é de: 2n instruções.

* Ao fim de cada iteração do laço **_for_**, precisamos executar mais duas instruções: uma de incremento (i++) e uma comparação para verificar se vamos continuar no laço **_for_** (i < n). No nosso algoritmo, o comando de laço **_for_** será executado n vezes, que é o número de elementos no **_array_**. Assim, essas duas instruções também serão executadas n vezes, ou seja, o seu custo será **2n instruções**.

* Se ignorarmos o que está dentro do corpo do laço **_for_**, veremos que o algoritmo necessita executar **3 + 2n instruções**.

    1. **3 instruções** antes de iniciar o laço **_for_**;
    2. **2 instruções** ao fim de cada laço **_for_**, o qual é executado **n vezes**;

* Assim, considerando um laço vazio, podemos definir uma função matemática que representa o custo do algoritmo em relação ao tamanho do **_array_** de entrada: **f(n) = 2n + 3**.