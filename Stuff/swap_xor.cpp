#include<bits/stdc++.h>

using namespace std;

int main(){
    int a = 5, b = 2;

    cout << "\nBefore swap: " << a << " " << b << endl << endl;

    cout << "A:" << bitset<8>(a) << endl;
    cout << "B:" << bitset<8>(b) << endl << endl;

    a = a ^ b;

    cout << "A:" << bitset<8>(a) << endl;
    cout << "B:" << bitset<8>(b) << endl << endl;

    b = b ^ a;

    cout << "A:" << bitset<8>(a) << endl;
    cout << "B:" << bitset<8>(b) << endl << endl;

    a = a ^ b;

    cout << "A:" << bitset<8>(a) << endl;
    cout << "B:" << bitset<8>(b) << endl << endl;

    cout << "\nAfter swap: " << a << " " << b << endl << endl;

    return 0;
}