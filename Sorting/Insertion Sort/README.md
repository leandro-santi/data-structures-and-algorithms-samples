## Insertion Sort

* Ordenação por **"inserção"** — _insertion sort_.

* Bastante simples.

* Se assemelha ao processo de ordenação de um conjunto de cartas de baralhos com as mãos:

    * Pega-se uma carta de cada vez e a "insira" em seu devido lugar, sempre deixando as cartas da mão em ordem.

* Tem um desempenho superior quando comparado aos outros algoritmos simples como o _buuble sort_ e o _selection sort_.

* O algoritmo _insertion sort_ percorre um _array_ e, para cada posição **_i_**, verifica se o seu valor está na posição correta.

* Essa ação acontece iterando para o começo do _array_ a partir da posição **_i_** e movimentando uma posição para frente os valores que são maiores do que o valor da posição **_i_**. 

* Desse modo, sempre terá uma posição livre para inserir o valor da posição **_i_** em sem devido lugar.

* Exemplo da ideia do algoritmo:

    1. Inicialmente temos um _array_ não ordenado: [7, 12, 9, 11, 3] -> Podemos considerar o primeiro valor como a parte inicial ordenada do _array_;
    2. O próximo valor agora deve ser movido para a posição correta na parte ordenada do array: [7, **12**, 9, 11, 3] -> O valor 12 já está ordenado;
    3. O próximo valor agora deve ser movido para a posição correta na parte ordenada do array: [7, 12, **9**, 11, 3] -> O valor 9 deve ser movido;
    4. O próximo valor agora deve ser movido para a posição correta na parte ordenada do array: [7, 9, 12, **11**, 3] -> O valor 11 deve ser movido;
    5. O próximo valor agora deve ser movido para a posição correta na parte ordenada do array: [7, 9, 11, 12, **3**] -> O valor 3 deve ser movido;
    6. E assim, o _array_ [3, 7, 9, 11, 12] foi ordenado.

~~~C
void insertion_sort(int *arr, int n){
    int i, j, aux;
    
    for(i = 1; i < n; i++){
        aux = arr[i];
        j = i;

        // Deslocando os valores à esquerda
        while(j > 0 && arr[j-1] > aux){
            arr[j] = arr[j-1];
            j--;
        }

        // Inserindo na frente dos valores deslocados
        arr[j] = aux;
    }
}
~~~

* O código acima mostra um exemplo da implementação do algoritmo _insertion sort_.

* O princípio de funcionamento desse algoritmo é a inserção de um elemento do _array_ na sua posição correta.

* Se o valor de uma determinada posição não está correta em relação aos seus antecessores, então, o algoritmo movimenta os seus antecessores uma posição para frente, acha o local certo e insere esse valor na frente de todos os antecessores.

* Esse processo de comparar o valor de uma posição do _array_ com seus antecessores é repetido para cada posição do _array_, buscando movimentar os valores maiores que o valor **atual** uma posição a frente no _array_.

* Ao fim da iteração mais interna (no exemplo, o _while_), copia-se o valor atual para a sua posição correta, que é a posição **_j_** do último valor movimentado no _while_.

* Considerando um _array_ com **_N_** elementos, o tempo de execução do _insertion sort_ é:

    * O(N) -> Melhor Caso: Os elementos já estão ordenados.
    * O(N^2) -> Pior Caso: Os elementos estão ordenados em ordem inversa.
    * O(N^2) -> Médio Caso: Os elementos estão embaralhados.

* O _insertion sort_ é mais eficiente que a maioria dos algoritmos de ordem quadrática, como o _selection sort_ e o _bubble sort_.

* É um algoritmo muito rápido para ordenação de conjuntos pequenos de dados, superando inclusive o _quick sort_.

* O _insertion sort_ é um algoritmo de ordenação estável, logo a ordem dos elementos iguais não muda durante a ordenação.

* Também é considerado um algoritmo _online_, podendo ordernar elementos na medida em que os recebe, ou seja, sem precisar ter todo o conjunto de dados para colocá-los em ordem.