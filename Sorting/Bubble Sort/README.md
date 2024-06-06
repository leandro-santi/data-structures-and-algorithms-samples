## Bubble Sort

* Ordenação por **"bolha"** - bubble sort.

* O algoritmo _bubble sort_ é um dos algoritmos de ordenação mais conhecidos e comuns que existem.

* O algoritmo _bubble sort_ trabalha de forma a movimentar, uma posição por vez, o maior valor existente na parte não ordenada de um _array_ para a sua respectiva posição no _array_ ordenado.

* O princípio de funcionamento desse algoritmo é a troca de valores em posições consecutivas de um _array_ para que fiquem ordenados da forma desejada.

~~~C
void bubble_sort(int *arr, int N){
    int i, flag, aux, end = N;

    do{
        flag = 0;

        for(i = 0; i < end-1; i++){
            if(arr[i] > arr[i+1]){
                aux = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = aux;
                flag = 1;
            }
        }

        end--;
    }while(flag != 0);
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