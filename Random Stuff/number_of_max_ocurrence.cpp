#include<bits/stdc++.h>

using namespace std;

void fillArray(int *v, int n){
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
}

int countMaxNumberOcurrences(int *v, int n){
    int count = 0;
    int max_number = -1000;

    for(int i = 0; i < n; i++){
        if(v[i] == max_number){
            count++;
        }

        if(v[i] > max_number){
            max_number = v[i];
            count = 1;
        }

    }

    return count;

}

int main(){
    int v[20];

    fillArray(v, 20);

    cout << "The number of ocurrences of the max value is: " << countMaxNumberOcurrences(v, 20) << endl;

    return 0;
}