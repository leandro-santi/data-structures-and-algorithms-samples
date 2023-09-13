#include<stdio.h>

#define MAX 5

int main(){
    int num[MAX];
    int i, total = 0;
    float avg, diff;

    for(i = 0; i < MAX; i++){
        scanf("%d", &num[i]);
        total += num[i];
    }

    avg = (float) (total / MAX);
    printf("Total Value: %d\n", total);
    printf("Average: %.2f\n", avg);

    for(i = 0; i < MAX; i++){
        printf("Number: %d / Diff: %d\n", num[i], num[i] - avg);
    }

    return 0;
}