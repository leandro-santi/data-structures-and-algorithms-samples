#include<bits/stdc++.h>

using namespace std;

void bubble_sort(int *arr, int N){
    int i, flag, aux, end = N;

    do{
        flag = 0;
        
        for(i = 0; i < end-1; i++){
            if(arr[i] > arr[i+1]){
                aux = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = aux;
                flag = 1;
            }
        }

        end--;
    }while(flag != 0);
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