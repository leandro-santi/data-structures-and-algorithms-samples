#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

int main(){
    int sm, pr;
    cin >> sm >> pr;

    int ns = sm + ((sm * pr) / 100);

    cout << ns << endl;

    return 0;
}