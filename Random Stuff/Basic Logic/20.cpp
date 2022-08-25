#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

int main(){
    int d, t;
    cin >> d >> t;

    float v = (d * 1000) / (t * 60);

    cout << v << endl;

    return 0;
}