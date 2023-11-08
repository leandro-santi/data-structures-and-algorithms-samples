#include<stdlib.h>
#include<stdio.h>

int main(){
    int x = 2;
    int *y = malloc(100); // Alocando 100 bytes de memória
    int *z = malloc(400); // Alocando 400 bytes de memória

    // Stack([z (Heap) | y (Heap) | x = 2])

    // int *array = (int *) malloc(5 * sizeof(int)); // Alocando bytes para 5 inteiros na memória 

    free(z);
    
    // Stack([z | y (Heap) | x = 2])

    return 0;
} // Heap([y])