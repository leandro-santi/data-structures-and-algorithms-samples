#include<bits/stdc++.h>

using namespace std;

string stuff = "ABCDEFGHIJKLMNOPQRSTUVWXYZ ";
string target = "METHINKS IT IS LIKE A WEASEL";

// Reprodution
void generateRandomString(string *s){
    for(int i = 0; i < 28; i++){

        *s += stuff[rand() % 29];

    }
}

// Recombination
char returnRandomCharacter(){
    return stuff[rand() % 29];
}

// Selection
int compareStrings(string s){
    int score = 0;

    for(int i = 0; i < 29; i++){
        if(s[i] == target[i]) score++;
    }

    return score;
}

// Mutation
void mutation(string *s, int *score){
    string copy, saveCopy;
    int count, mutation;

    saveCopy = copy = *s;

    for(int i = 0; i < 100; i++){
        for(int j = 0; j < 29; j++){
            mutation = 1 + rand() % 100;
            if(mutation <= 5){
                copy[j] = returnRandomCharacter();
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
    string phrase = "";
    int generation = 0, score = 0;
    
    generateRandomString(&phrase);

    srand(time(0));

    while(phrase != target){
        mutation(&phrase, &score);
        generation++;
        cout << "Generation: " << generation << " ";
        cout << "Phrase: " << phrase <<  " ";
        cout << "Score: " << score << endl;
    }

    return 0;
}