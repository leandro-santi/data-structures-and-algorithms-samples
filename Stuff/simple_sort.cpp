#include<bits/stdc++.h>

#define MAX 5

using namespace std;

void xxx_sort(int *arr){
    int min, j, temp;

    for(int i = 0; i < MAX-1; i++){
        min = i;
        
        for(int j = i + 1; j < MAX; j++){
            if(arr[j] < arr[min]){
                min = j;
            }
        }

        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp; 
    }
}

int main(){
    int array[] = {5,2,1,4,7};

    xxx_sort(array);

    for(int i = 0; i < MAX; i++){
        cout << array[i] << " ";
    }

    return 0;
}