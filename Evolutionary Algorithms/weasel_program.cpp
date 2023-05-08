#include<bits/stdc++.h>

using namespace std;

string stuff = "ABCDEFGHIJKLMNOPQRSTUVWXYZ ";
string target = "METHINKS IT IS LIKE A WEASEL";

void generateRandomString(string *s){

    for(int i = 0; i < 28; i++){

        *s += stuff[rand() % 29];

    }
}

int compareStrings(string s){

    int score = 0;

    for(int i = 0; i < 29; i++){

        if(s[i] == target[i]) score++;

    }

    return score;

}

void mutation(string *s, int *score){
    string copy, saveCopy;
    int count, mutation;

    saveCopy = copy = *s;

    for(int i = 0; i < 100; i++){
        
        for(int j = 0; j < 29; j++){

            mutation = rand() % 100;

            if(mutation <= 5){
                copy[j] = stuff[rand() % 29];
            }

        }

        count = compareStrings(copy);
        if(count > *score){
            saveCopy = copy;
            *score = count;
        }

        *s = saveCopy;

    }

}

int main(){

    string s = "";
    int generation = 1, score = 0;
    
    generateRandomString(&s);

    srand(time(0));

    while(s != target){
        mutation(&s, &score);
        generation++;
        cout << "Generation: " << generation << endl;
        cout << "Frase: " << s << endl;
    }

    return 0;
}