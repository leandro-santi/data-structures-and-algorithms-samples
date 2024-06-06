## Ordenação

* A **ordenação** é o ato de colocar um determinado conjunto de dados em uma determinada ordem.

* A ordenação permite que o acesso aos dados seja feito de forma mais eficiente.

* A ordenação de um conjunto de dados é feita utilizando como base uma chave específica.

    * A chave de ordenação é o campo do item utilizado para comparação.
    * É por meio dele que sabemos se determinado elemento está à frente ou não de outros no conjunto ordenado.

* Para realizar a ordenação podemos usar qualquer tipo de chave, desde que exista uma regra de ordenação bem definida.

* Existem vários tipos de ordenação, sendo os mais comuns:

    * **Numérica:** 1, 2, 3, 4, 5.
    * **Lexicográfica (Ordem Alfabética):** Ana, André, Bianca, Ricardo.

* Independentemente do tipo, a ordenação pode ser:

    * **Crescente:**
        * 1, 2, 3, 4, 5.
        * Ana, André, Bianca, Ricardo.
    * **Decrescente:**
        * 5, 4, 3, 2, 1.
        * Ricardo, Bianca, André, Ana.

* Um **algoritmo de ordenação** é aquele que coloca os elementos de uma dada sequência em uma certa ordem predefinida.

* Existem vários algoritmos diferentes para realizar a ordenação dos dados.

* Esses algoritmos podem ser classificados de ordenação **interna** (**_inplace_**) ou **externa**.

    * **Ordenação interna:** O conjunto de dados a ser ordenado cabe todo na memória principal. Qualquer elemento pode ser imediatamente acessado. Ex: Elementos de _arrays_ e estruturas de dados.
    * **Ordenação externa:** O conjunto de dados a ser ordenado não cabe na memória principal (está armazenado em memória secundária, por exemplo, em um arquivo). Os elementos são acessados sequencialmente ou em grandes blocos.

* Um **algoritmo de ordenação** é considerado **estável** se a ordem dos elementos com chaves iguais não muda durante a ordenação.

    * Imagine um conjunto de dados não ordenado com dois valores iguais 5(a) e 5(b).
        * 5(a), 2, 5(b), 3, 4, 1 -> Não ordenado.
    * Um algoritmo de ordenação será considerado estável se o valor 5(a) vier antes do valor 5(b) quando esse conjunto de dados for ordenado de forma crescente.
        * O algoritmo preserva a ordem relativa original dos valores.
    * 1, 2, 3, 4, **5(a), 5(b) -> Ordenação estável:** A ordem relativa dos elementos com chaves iguais é preservada.
        * Ex: Bubble Sort, Insertion Sort.
    * 1, 2, 3, 4, **5(b), 5(a) -> Ordenação não estável:** A ordem relativa dos elementos com chaves iguais não é preservada.
        * Ex: Quick Sort, Selection Sort.