#include <bits/stdc++.h>

using namespace std;

void insertion_sort(int *arr, int n){
    int i, j, aux;
    
    for(i = 1; i < n; i++){
        aux = arr[i];
        j = i;
        
        while(j > 0 && arr[j-1] > aux){
            arr[j] = arr[j-1];
            j--;
        }
        
        arr[j] = aux;
    }
}

int main(){
    int arr[] = {5, 3, 1, 2, 4};
    int n = 5;

    insertion_sort(arr, n);

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}