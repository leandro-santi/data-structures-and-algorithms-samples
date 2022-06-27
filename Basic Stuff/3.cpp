#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

#define PI 3.14159

int main(){
    float volume, height, radius;

    cin >> height >> radius;

    volume = PI * (radius*radius) * height;

    cout << volume << endl;

    return 0;
}
