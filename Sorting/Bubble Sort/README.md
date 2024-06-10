## Bubble Sort

* Ordenação por **"bolha"** - _bubble sort_.

* O algoritmo _bubble sort_ é um dos algoritmos de ordenação mais conhecidos e comuns que existem.

* O algoritmo _bubble sort_ trabalha de forma a movimentar, uma posição por vez, o maior valor existente na parte não ordenada de um _array_ para a sua respectiva posição no _array_ ordenado.

* O princípio de funcionamento desse algoritmo é a troca de valores em posições consecutivas de um _array_ para que fiquem ordenados da forma desejada.

* Exemplo da ideia do algoritmo:

    1. Inicialmente temos um _array_ não ordenado: [7, 12, 9, 11, 3];
    2. É analisado os dois primeiros valores: [**7, 12**, 9, 11, 3] -> Estão ordenados;
    3. É analisado os valores seguintes: [7, **12, 9**, 11, 3] -> Realizar a troca;
    4. É analisado os valores seguintes: [7, 9, **12, 11**, 3] -> Realizar a troca;
    4. É analisado os valores seguintes: [7, 9, 11, **12, 3**] -> Realizar a troca;
    5. E assim o _loop_ reinicia e continua até que o _array_ [7, 9, 11, 3, 12] esteja ordenado.

~~~C
void bubble_sort(int *arr, int n){
    int i, j;
    bool swaped;

    for(i = 0; i < n-1; i++){
        swaped = false;

        for(j = 0; j < n-1-i; j++){
            if(arr[j] > arr[j+1]){
                swaped = true;
                swap(arr, j, j+1);
            }
        }

        if(!swaped) break;
    }
}
~~~

* No algoritmo acima, ao se comparar dois valores em sequência, pode ser que eles não estejam ordenados. Caso não estejam, o algoritmo trata de realizar a troca de lugar dos valores.

* Esse processo é repetido para cada par de valores em posições consecutivas do _array_.

* O comando **_do-while_** termina se a variável _flag_ for igual a 0. Logo, caso não tenha ocorrido trocas.

* **_Bubble sort_** é um algoritmo simples e de fácil entendimento e implementação.

* Infelizmente, não é um algoritmo eficiente e é difundido apenas por razões acadêmicas.

* Sua eficiência diminui drasticamente à medida que o número de elementos no _array_ aumenta.

* Considerando um _array_ de **N** elementos, o tempo de execução do _bubble sort_ é:

    * _O(N)_ -> Melhor Caso: Os elementos já estão ordenados.
    * _O(N^2)_ -> Pior Caso: Os elementos estão ordenados em ordem inversa.
    * _O(N^2)_ -> Médio Caso: Os elementos estão embaralhados.