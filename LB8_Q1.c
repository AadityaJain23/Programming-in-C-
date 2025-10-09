// Declare a global variable outside all functions and use it inside various functions to understand its accessibility.

#include<stdio.h>

int a = 20, b = 10;

void sum(){
    printf("Sum = %d\n", a + b);
}
void sub(){
    printf("Substraction = %d\n", a - b);
}
void mul(){
    printf("Multiplication = %d\n", a * b);
}
void div(){
    if(b != 0){
        printf("Division = %d\n", a / b);
    }else{
        printf("Division by zero, not valid.\n");
    }
}

int main(){

    printf("Values : a = %d, b = %d\n",a,b);
    sum();
    sub();
    mul();
    div();
    
    return 0;
}