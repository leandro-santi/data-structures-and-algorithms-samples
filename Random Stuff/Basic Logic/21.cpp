#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#define PI 3.14159265

using namespace std;

int main(){
    float r;
    cin >> r;

    float v = (4 / 3) * PI * (pow(r, 3));

    cout << v << endl;

    return 0;
}