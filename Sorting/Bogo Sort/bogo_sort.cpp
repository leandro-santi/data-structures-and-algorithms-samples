#include<bits/stdc++.h>

using namespace std;

bool is_sorted(int *a, int n){
    for (int i = 0; i < n - 1; i++) {
        if (a[i] > a[i + 1]) return false;
    }

    return true;
}

void sort(int *a, int n){
    srand(time(NULL));
    for(int i = 0; i < n; i++){
        swap(a[i], a[rand() % n]);
    }
}

void bogo_sort(int *a, int n){
    int iteration = 0;
    
    while (!is_sorted(a, n)) {
        cout << "Iteration: " << iteration++ << "\n";
        sort(a, n);
    }
}

int main(){
    int a[] = {2, 1, 3, 5, 4};
    int n = 5;

    bogo_sort(a, n);

    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }

    cout << endl;

    return 0;
}