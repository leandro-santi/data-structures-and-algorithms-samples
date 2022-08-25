#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#define PI 3.14159265

using namespace std;

int main(){
    double a, r;
    cin >> r;

    a = PI * pow(r, 2);

    cout << a << endl;

    return 0;
}