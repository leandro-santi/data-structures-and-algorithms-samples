#include<bits/stdc++.h>

// Counting occurrence number of the max number

using namespace std;

void fillArray(int *v, int n){
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
}

int countMaxNumberOccurrences(int *v, int size, int *number){
    int count = 0;
    int max_number = -INT64_MAX;

    for(int i = 0; i < size; i++){
        if(v[i] == max_number){
            count++;
        }

        if(v[i] > max_number){
            max_number = v[i];
            count = 1;
        }

    }

    *number = max_number;

    return count;

}

int main(){
    int v[20], number, result;

    fillArray(v, 20);

    result = countMaxNumberOccurrences(v, 20, &number);

    cout << "The input max value was: " << number << endl;
    cout << "The number of occurrences of the max value is: " << result << endl;

    return 0;
}