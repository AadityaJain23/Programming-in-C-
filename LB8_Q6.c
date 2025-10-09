/* Develop a non-recursive function FIBO (num) that accepts an integer argument. Write
a C program that invokes this function to generate the Fibonacci sequence up to num. */

#include<stdio.h>

void FIBO(int num){
    int first = 0, second = 1, next;
    if(num <= 0){
        printf("Enter a positive integer.\n");
        return;
    }

    printf("Fibonacci sequence up to %d terms: \n", num);
    for(int i = 0; i <num; i++){
        if(i == 0){
            next = first;
        }else if(i == 1){
            next = second;
        }else{
            next = first + second;
            first = second;
            second = next;
        }
        printf("%d\t", next);
    }
    printf("\n");
}

int main(){
    int num;
    printf("Enter the number of terms = ");
    scanf("%d",&num);
    FIBO(num);

    return 0;
}