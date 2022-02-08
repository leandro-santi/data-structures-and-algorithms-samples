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

    for(int i = 0; i < 10-1; i++){
        for(int j = 0; j < 10-i-1; j++){
            if(v[j] > v[j+1]){
                trocar(v, j, j+1);
            }
        }
    }

    for(int i = 0; i < 10; i++){
        cout << v[i] << " ";
    }

    cout << endl;

    return 0;
}