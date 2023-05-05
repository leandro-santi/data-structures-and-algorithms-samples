#include<bits/stdc++.h>

// Verify if a string is palindromic

using namespace std;

bool isPalindromic(string s){
    int count = s.length();

    for(int i = 0; i < count / 2; i++){
        if(s[i] != s[count-1-i]) return false;
    }

    return true;

}

int main(){
    string s;
    cin >> s;

    isPalindromic(s) ? cout << "Yes" << endl : cout << "No" << endl;

    return 0;
}