#include<stdlib.h>

int strlen(char *string){
    int i;

    for(i = 0; string[i] != '\0'; i++) {} // Counting

    return i;
}

int strpos(char *string_1, char *string_2){
    int len_1, len_2, i, j_1, j_2;
    len_1 = strlen(string_1), len_2 = strlen(string_2);

    for(i = 0; i+len_2 <= len_1; i++){
        for(j_1 = i, j_2 = 0; j_2 <= len_2 && string_1[j_1] == string_2[j_2]; j_1++, j_2++){
            if(j_2 == len_2) return i;
        } 
    }

    return -1;
}

void strcat(char *string_1, char *string_2){
    int i, j;

    for(i = 0; string_1[i] != '\0'; i++){ }

    for(j = 0; string_2[j] != '\0'; string_1[i++] = string_2[j++]){ }
}

void substr(char *string_1, char *string_2, int i, int j){
    int k, m;

    for(k = i, m = 0; m < j; string_1[k++] = string_2[m++]){}
    
    string_2[m] = '\0'; // Recebe o fim NULL
}

int main(){
    int size = 0, occurrence;
    char *string = "Alo Xicada", *sub_string = "Xicada", *sub = "";

    // Counting number of chars
    size = strlen(string);
    printf("%s = %d\n", string, size);

    // Finding the first occurrence
    occurrence = strpos(string, sub_string);
    printf("%d\n", occurrence);

    // Concatenation of strings
    strcat(string, sub_string);
    printf("%s\n", string);

    // Creating a substring
    substr(string, sub, 0, 3);
    printf("%s\n", sub);
    
    return 0;
}