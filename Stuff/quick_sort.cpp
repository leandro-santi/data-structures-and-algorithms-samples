#include<iostream>
#include<stdlib.h>

using namespace std;

int partition(int *vetor, int p, int r){
    int x = vetor[r];
    int i = p - 1, aux;

    for(int j = p; j <= r - 1; j++){
        if(vetor[j] <= x){
            i+=1;
            aux = vetor[i];
            vetor[i] = vetor[j];
            vetor[j] = aux;
        }
    }
    
    aux = vetor[i + 1];
    vetor[i + 1] = vetor[r];
    vetor[r] = aux;
    
    return i + 1;
}

void quick_sort(int *vetor, int p, int r){
    int q;

    if(p < r){
        q = partition(vetor, p, r);
        quick_sort(vetor, p, q - 1);
        quick_sort(vetor, q + 1, r);
    }
}

int main(){
    int v[10] = {5, 1, 4, 2, 3, 7, 6, 8, 10, 9};
    quick_sort(v, 0, 10);

    for(int i = 0; i < 10; i++){
        cout << v[i] << " ";
    }

    cout << endl;

    return 0;
}