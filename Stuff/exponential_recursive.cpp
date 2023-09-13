#include<bits/stdc++.h>

using namespace std;

int exp(int x, int n){
    if(n == 0) return 1;
    return exp(x, n-1) * x;
}

int main(){
    int r = exp(0, 0);

    cout << r << endl;
}