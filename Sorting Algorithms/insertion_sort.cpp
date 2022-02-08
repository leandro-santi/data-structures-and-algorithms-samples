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

    int min, j;

    for(int i = 1; i < 10; i++){
        min = v[i];
        j = i-1;
        while(j >= 0 && v[j] > min){
            v[j + 1] = v[j];
            j = j - 1;
        }
        v[j+1] = min;
    }

    for(int i = 0; i < 10; i++){
        cout << v[i] << " ";
    }
    
    cout << endl;

    return 0;
}