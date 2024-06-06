#include <bits/stdc++.h>

using namespace std;

void insertion_sort(int *arr, int N){
    int i, j, aux;
    
    for(i = 1; i < N; i++){
        aux = arr[i];
        j = i;
        
        while(j > 0 && arr[j-1] > aux){
            arr[j] = arr[j-1];
            j--;
        }
        
        arr[j] = aux;
    }
}

int main()
{
    int arr[] = {5, 3, 1, 2, 4};

    insertion_sort(arr, 5);

    for(int i = 0; i < 5; i++){
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}