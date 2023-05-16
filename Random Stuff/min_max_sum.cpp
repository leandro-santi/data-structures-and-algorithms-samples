#include<bits/stdc++.h>

// Find the minimum and maximum values that can be calculated by summing
// exactly four of five integers

using namespace std;

void min_max_sum(int *v){
    int min = 0, max = 0;
    for(int i = 0; i < 5; i++){
        if(i > 0) max += v[i]; // Calculating the max sum
        if(i < 4) min += v[i]; // Calculating the min sum
    }

    cout << "Mimimum: " << min << " Maximum: " << max << endl;
}

int main(){
    int v[5];

    for(int i = 0; i < 5; i++){
        cin >> v[i];
    }

    sort(v, v+5); // Sorting array

    min_max_sum(v);

    return 0;
}