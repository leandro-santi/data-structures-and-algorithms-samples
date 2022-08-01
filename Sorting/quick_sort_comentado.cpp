#include<iostream>
#include<stdlib.h>

using namespace std;

int partition(int *vetor, int p, int r){ // Reorganizar vetor[p .. q - 1] e vetor[q + 1 .. r] Complexidade: O(n)
    int x = vetor[r]; // Pivô inicialmmente é o ultimo elemento do vetor O(1)
    int i = p - 1, aux; // O(1)
    for(int j = p; j <= r - 1; j++){ // O(n)
        if(vetor[j] <= x){ // Se for menor O(n)
            i+=1; // Incrementa o valor de i e troca as posicoes (i, j) do vetor
            aux = vetor[i];
            vetor[i] = vetor[j];
            vetor[j] = aux;
        }
    }
    aux = vetor[i + 1]; // Posiciona o pivô na posição i + 1 O(1)
    vetor[i + 1] = vetor[r];
    vetor[r] = aux;
    
    return i + 1; // Retorna a posição do pivô
}

void quick_sort(int *vetor, int p, int r){
    int q;

    if(p < r){ // O(1)
        q = partition(vetor, p, r); // O(n)
        quick_sort(vetor, p, q - 1); // T(k)
        quick_sort(vetor, q + 1, r); // T(n - k - 1)
    } // total -> T(n) = T(k) + T(n - k - 1) + O(n)
}

int main(){
    int v[10] = {5, 1, 4, 2, 3, 7, 6, 8, 10, 9};
    quick_sort(v, 0, 10); // Chamada inicial (vetor, 0, comprimento do vetor)

    for(int i = 0; i < 10; i++){
        cout << v[i] << " ";
    }

    return 0;
}