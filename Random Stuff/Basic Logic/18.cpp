#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

int main(){
    int a, b, c, branco, nulo, total;
    a = b = c = branco = nulo = total = 0;
    
    cin >> a >> b >> c >> branco >> nulo;

    total = a + b + c + branco + nulo;

    cout << total << endl;
    cout << ((total - branco - nulo) * 100) / total << "%" << endl;
    cout << (a * 100) / total << "%" << endl;
    cout << (b * 100) / total << "%" << endl;
    cout << (c * 100) / total << "%" << endl;
    cout << (branco * 100) / total << "%" << endl;
    cout << (nulo * 100) / total << "%" << endl;

    return 0;
}