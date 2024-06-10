## Análise da Complexidade de Algoritmos

* Podemos fazer algoritmos mais eficientes? É a ***Análise de Algoritmos*** que responde essa questão.

* Algoritmos diferentes que resolvem um mesmo problema não necessariamente o fazem com a mesma eficiência.

* Essas diferenças de eficiência podem ser:

    1. Irrelevantes para um pequeno número de elementos processados.
    2. Crescer proporcionalmente com o número de elementos processados.

* **A complexidade computacional** é usada para medir e comparar a eficiência dos algoritmos. Ela indica o custo ao se aplicar um determinado algoritmo.

    * **custo = memória + tempo.**
    * A **memória** indica quanto de espaço o algoritmo vai consumir e o **tempo**, a duração de execução.

* Para analisar se um determinado algoritmo é eficiente, pode ser utilizar de uma **análise empírica** ou **análise matemática**.

### Análise Empírica

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
    * Qual a natureza dos dados? Dados reais, aleatórios ou perversos (piores casos).

### Análise Matemática

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

#### Contando instruções de um algoritmo

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
    2. **2 instruções** ao fim de cada laço **_for_**, o qual é executado **n vezes**.

* Assim, considerando um laço vazio, podemos definir uma função matemática que representa o custo do algoritmo em relação ao tamanho do **_array_** de entrada: **f(n) = 2n + 3**.