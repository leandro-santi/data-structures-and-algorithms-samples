#include<bits/stdc++.h>

using namespace std;

void selection_sort(int *arr, int n){
    int i, j, smaller, temp;
    
    for(i = 0; i < n-1; i++){
        smaller = i;
        
        for(j = i + 1; j < n; j++){
            if(arr[j] < arr[smaller]){
                smaller = j;
            }
        }
        
        if(i != smaller){
            temp = arr[i];
            arr[i] = arr[smaller];
            arr[smaller] = temp;
        }
    }
}

int main(){
    int arr[] = {5, 3, 1, 2, 4};
    int n = 5;

    selection_sort(arr, n);

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}