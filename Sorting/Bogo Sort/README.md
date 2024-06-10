## Bogo Sort

* Ordenação por **"permutação"** - _bogo sort_.

* Também é conhecido como ordenação "estúpida" ou "estou com sort".

* É um algoritmo de ordenação extremamente ineficiente.

* É baseado em uma reordenação aleatória dos elementos de um _array_.

    * Paradigma de geração e teste.

* É um algoritmo probabilístico por natureza.

* O algoritmo gera sucessivamente permutações de sua entrada até encontrar uma que esteja ordenada.

* Por exemplo, se o _bogo sort_ fosse usado para ordenar um baralho de cartas, consistiria em verificar se o baralho estava em ordem e, se não estivesse, alguém jogaria o baralho para o alto, pegaria as cartas aleatoriamente e repetiria o processo até que o baralho estivesse ordenado.

* É um algoritmo não estável.

* Ele termina pela mesma razão do **Teorema do Macaco Infinito** onde existe alguma probabilidade de que aconteça a permutação correta, dado que em um infinito número de tentativas fatalmente a encontrará.

    * O **"Teorema do Macaco Infinito"** afirma que um macaco digitando aleatoriamente em um teclado por um intervalo de tempo infinito irá quase certamente criar um texto qualquer escolhido, como por exemplo a obra completa de William Shakespeare.

~~~C
bool is_sorted(int *arr, int n){
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) return false;
    }

    return true;
}

void sort(int *arr, int n){
    srand(time(NULL));
    
    for(int i = 0; i < n; i++){
        swap(arr[i], arr[rand() % n]);
    }
}

void bogo_sort(int *arr, int n){
    int iteration = 0;
    
    while (!is_sorted(arr, n)) {
        cout << "Iteration: " << iteration++ << "\n";
        sort(arr, n);
    }
}
~~~

* Inicialmente é verificado se o _array_ está ordenado pela função _is_sorted_.

* Caso o _array_ não esteja ordenado, a função _sort_ ordena novamente o _array_ trocando as posições de forma aleatória.

* Isso se repete até que o _array_ esteja ordenado.