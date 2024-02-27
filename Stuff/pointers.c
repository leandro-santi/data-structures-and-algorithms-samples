#include<stdio.h>

void pointer_1(int y){
    ++y;
    printf("%d\n", y);
}

void pointer_2(int *y){
    ++(*y);
    printf("%d\n", *y);
}

int main(){
    int num_int = 10;
    float num_float = 3.0;

    int *pi;
    float *pf;
    char *pc;

    pi = &num_int;
    pf = &num_float;

    printf("%d\n", *pi); // print integer value
    printf("%.2f\n", *pf); // print float value

    pi = (int *) pf; // trying to convert a float pointer value to int

    printf("%d\n", *pi);

    printf("%d\n", num_int);
    pointer_1(num_int);
    pointer_2(&num_int);
    printf("%d\n", num_int);

    return 0;
}