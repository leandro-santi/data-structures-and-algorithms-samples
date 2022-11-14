#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

int main(){
    float value, tax, time, render;

    cin >> value >> tax >> time;

    render = value + ((value*tax) * time);

    cout << "Render = " << render;

    return 0;
}
