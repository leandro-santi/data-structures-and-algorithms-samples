#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

int main(){
    float celsius;
    int fahrenheit;
    
    cin >> fahrenheit;

    celsius = ((fahrenheit - 32) * 5) / 9;

    cout << celsius << endl;

    return 0;
}
