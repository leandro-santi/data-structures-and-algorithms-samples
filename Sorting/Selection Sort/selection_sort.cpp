#include<bits/stdc++.h>

using namespace std;

void selection_sort(int *arr, int N){
    int i, j, smaller, temp;
    
    for(i = 0; i < N-1; i++){
        smaller = i;
        
        for(j = i + 1; j < N; j++){
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

    selection_sort(arr, 5);

    for(int i = 0; i < 5; i++){
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}