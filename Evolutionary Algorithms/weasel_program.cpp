#include<bits/stdc++.h>

using namespace std;

string stuff = "ABCDEFGHIJKLMNOPQRSTUVWXYZ ";
string target = "METHINKS IT IS LIKE A WEASEL";

void startString(string *s){

    for(int i = 0; i < 28; i++){

        *s += stuff[rand() % 29];

    }
}

int compareStrings(string s){

    int score = 0;

    for(int i = 0; i < 28; i++){

        if(s[i] == target[i]) score++;

    }

    return score;

}

void makeCopies(string *s){
    string copy, saveCopy;
    int count, score, mutation;

    copy = *s;

    for(int i = 0; i < 100; i++){
        
        for(int j = 0; j < 29; j++){

            if(copy[j] != target[j]){
                
                mutation = rand() % 100;
                if(mutation <= 5){
                    copy[j] = stuff[rand() % 29];
                }

            }

        }

        // Saving the best copy
        /*count = compareStrings(copy);
        if(count > score){
            saveCopy = copy;
            score = count;
        }*/

        *s = copy;
        cout << copy << endl;

    }
}

int main(){

    string s = "";
    int generation = 1;
    
    startString(&s);

    // cout << s << " " << s.length() << endl;

    while(s != target){
        cout << "Generation: " << generation << endl;
        makeCopies(&s);
        generation++;
    }

    return 0;
}