//Write a program to add two no.s take your input for the numbers from user.


#include<stdio.h>
int main(){

int a , b , Sum ;

printf("Enter the Value of a = ");
scanf("%d" , &a);
printf("Enter the Value of b = ");
scanf("%d" , &b);

Sum= a+b ;

//printf("Sum is = %d" , Sum);

printf("Addition of %d and %d is %d ", a,b,Sum);

    return 0;
}