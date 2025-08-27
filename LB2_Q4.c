// Write a program to show the use of relational operators by comparing two values (Take user Input).

#include<stdio.h>
int main(){

    int A,B;
    printf("Enter the value of A= ");
    scanf("%d",&A);
    printf("Enter the value of B= ");
    scanf("%d",&B);
    
    printf("Operation X>=Y, value=%d \n",A>=B);
    printf("Operation X<=Y, value=%d \n",A<=B);
    printf("Operation X>Y, value=%d \n",A>B);
    printf("Operation X<Y, value=%d \n",A<B);
    printf("Operation X==Y, value=%d \n",A==B);
    printf("Operation X!=Y, value=%d",A!=B);

    return 0;
}