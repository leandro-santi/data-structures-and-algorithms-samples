#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

int main(){
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    cout << a + b << " " << a + c << " " << a + d << endl;
    cout << a * b << " " << a * c << " " << a * d << endl;

    cout << b + c << " " << b + d << endl;
    cout << b * c << " " << b * d << endl;

    cout << c + d << endl;
    cout << c * d << endl;

    return 0;
}
