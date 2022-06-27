#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

int main(){
    int celsius;
    float fahrenheit;
    
    cin >> celsius;

    fahrenheit = (9 * celsius + 160) / 5;

    cout << fahrenheit << endl;

    return 0;
}
