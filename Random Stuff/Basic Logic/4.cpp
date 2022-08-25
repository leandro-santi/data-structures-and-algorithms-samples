#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

int main(){
    float time, velocity, distance, fuel;

    cin >> time >> velocity;

    distance = time * velocity;

    cout << "Distance: " << distance << endl;

    fuel = distance / 12;

    cout << "Fuel: " << fuel << endl;

    return 0;
}
