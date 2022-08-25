#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

int main(){
    int a, b;
    cin >> a >> b;

    int aux;

    aux = a;
    a = b;
    b = aux;

    cout << "A: " << a << " B: " << b << endl;

    return 0;
}
