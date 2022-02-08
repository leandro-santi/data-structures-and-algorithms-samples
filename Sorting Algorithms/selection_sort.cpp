#include<iostream>
#include<stdlib.h>

using namespace std;

void trocar (int *v, int i, int j) {
    int aux = v[i];
    v[i] = v[j];
    v[j] = aux;
}

int main(){
    int v[10] = {1, 2, 3, 5, 4, 9, 8, 10, 6, 7};

    int min;

    for(int i = 0; i < 10-1; i++){
        min = i;
        for(int j = i+1; j < 10; j++){
            if(v[j] > v[min]){
                min = j;
            }
        }
        trocar(v, i, min);
    }

    for(int i = 0; i < 10; i++){
        cout << v[i] << " ";
    }
    
    cout << endl;

    return 0;
}