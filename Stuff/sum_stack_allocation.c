#include<stdlib.h>
#include<stdio.h>

int sum(int a, int b){ // Stack([a = 2 | b = 3], [y = 3 | x = 2])
    int c = a + b; // Stack([c = 5 | a = 2 | b = 3], [z | y = 3 | x = 2])
    return c;
}

int main(){
    int x = 2; // Stack([x = 2])
    int y = 3; // Stack([y = 3 | x = 2])
    int z = sum(x, y); // return = Stack([z = 5 | y = 3 | x = 2])

    printf("Sum = %d\n", z);

    return 0;
}