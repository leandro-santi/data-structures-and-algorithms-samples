#include<bits/stdc++.h>

using namespace std;

bool is_sorted(int *arr, int n){
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) return false;
    }

    return true;
}

void sort(int *arr, int n){
    srand(time(NULL));
    
    for(int i = 0; i < n; i++){
        swap(arr[i], arr[rand() % n]);
    }
}

void bogo_sort(int *arr, int n){
    int iteration = 0;
    
    while (!is_sorted(arr, n)) {
        cout << "Iteration: " << iteration++ << "\n";
        sort(arr, n);
    }
}

int main(){
    int arr[] = {2, 1, 3, 5, 4};
    int n = 5;

    bogo_sort(arr, n);

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}