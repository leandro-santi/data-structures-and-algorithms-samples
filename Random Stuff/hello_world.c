#include<stdlib.h>
#include<stdio.h>
#include<string.h>

// pass by value generates copies of the original variable in memory

void f2(char string[]){
    printf("from f2: %d\n", &string);
}

void f1(char string[]){
    printf("from f1: %d\n", &string);
    f2(string);
}

void main(){
    char hello[] = "Hello World";

    printf("from main: %d\n", &hello);
    f1(hello);

    char *hello2, *hello3;
    hello2 = malloc(sizeof(hello));
    strcpy(hello2, hello);
    printf("from hello2: %s\n", hello2);

    hello3 = hello2 + 6; // sum 6 bytes starting on the initial address of hello2 in memory
    printf("from hello3: %s\n", hello3);

    return;
}