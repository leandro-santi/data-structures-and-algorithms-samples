## Selection Sort

* Ordenação por **"seleção"** - _selection sort_

* É um algoritmo de ordenação bastante simples.

* Ele tem esse nome pois, a cada iteração, "seleciona" o elemento (maior ou menor, dependendo do tipo de ordenação) para ocupar aquela posição do _array_.

* Tem um desempenho quase sempre superior quando comparado ao _bubble sort_.

* O algoritmo _selection sort_ divide o _array_ em duas partes:

    * Uma parte ordenada (à esquerda);
    * Outra parte que não foi ordenada (à direita).

* Para cada elemento do _array_, começando do primeiro, o algoritmo procura na parte à direita (não ordenada) o valor, maior (ordenação crescente) ou menor (ordenação decrescente), e troca os dois valores de lugar.

* Em seguida, o algoritmo avança para a próxima posição do _array_ e repete esse processo. Isso é feito até que todo o _array_ esteja ordenado.

~~~C
void selection_sort(int *arr, int N){
    int i, j, smaller, temp;
    
    for(i = 0; i < N-1; i++){
        smaller = i;
        
        for(j = i + 1; j < N; j++){
            if(arr[j] < arr[smaller]){
                smaller = j;
            }
        }
        
        if(i != smaller){
            temp = arr[i];
            arr[i] = arr[smaller];
            arr[smaller] = temp;
        }
    }
}
~~~

* No algoritmo acima, o princípio de funcionamento desse algoritmo é a seleção do melhor elemento para ocupar uma posição do _array_.

* O algoritmo percorre os elementos da direita procurando o índice do menor valor dentre todos. Ao chegar no final do _array_, o algoritmo troca o valor do elemento atual, índice **_i_**, com o menor valor encontrado, índice **_smaller_**.

* O processo de comparação entre o valor de uma posição do _array_ com seus sucessores é repetido para cada posição do _array_.

~~~C
    // Procura o menor valor à direita:
    for(j = i + 1; j < N; j++){
        if(arr[j] < arr[smaller]){
            smaller = j;
        }
    }
    
    // Troca os valores de lugar:
    if(i != smaller){
        temp = arr[i];
        arr[i] = arr[smaller];
        arr[smaller] = temp;
    }
~~~

* O _selection sort_, assim como o _bubble sort_, não é um algoritmo eficiente.

* Sua eficiência diminui drasticamente à medida que o número de elementos do _array_ aumenta, não sendo recomendado para grandes quantidades de dados.

* O _selection sort_ compara a cada interação um elemento com os outros, visando encontrar o menor. Dessa forma, podemos entender que não existe um melhor caso mesmo que o vetor esteja ordenado ou em ordem inversa serão executados os dois laços do algoritmo, o externo e o interno.

* Considerando um _array_ de _N_ elementos, o tempo de execução do _selection sort_ é sempre de ordem _O(N^2)_.

* A eficiência do _selection sort_ não depende da ordem inicial dos elementos.