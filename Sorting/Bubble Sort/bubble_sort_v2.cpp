#include<bits/stdc++.h>

using namespace std;

void swap(int *arr, int a, int b){
    int aux;
    aux = arr[a];
    arr[a] = arr[b];
    arr[b] = aux;
}

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

int main(){
    int arr[] = {5, 3, 1, 2, 4};

    bubble_sort(arr, 5);

    for(int i = 0; i < 5; i++){
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}