#include<stdio.h>
#include<stdlib.h>

void fun(int num){
    printf("The number is: %d\n", num);
}

void add(int a, int b){ 
    printf("Addition is %d\n", a+b); 
}

void subtract(int a, int b){ 
    printf("Subtraction is %d\n", a-b); 
}

void multiply(int a, int b){ 
    printf("Multiplication is %d\n", a*b); 
}
 
void fun1(){ 
    printf("Fun1\n"); 
}

void fun2(){
    printf("Fun2\n");
}
  
void wrapper(void (*fun)()){ 
    fun(); 
}

int main(){
    void (*fun_ptr)(int) = &fun;
    (*fun_ptr)(10); 

    void (*fun_ptr_arr[])(int, int) = {add, subtract, multiply};
    int ch, a = 15, b = 10; 
  
    printf("Enter Choice: 0 for add, 1 for subtract and 2 for multiply\n");
    
    scanf("%d", &ch); 
  
    if (ch > 2) return 0; 
  
    (*fun_ptr_arr[ch])(a, b);

    wrapper(fun1); 
    wrapper(fun2); 

    return 0;
}