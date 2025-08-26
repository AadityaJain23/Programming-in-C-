// Write a program to convert temperature from Celsius to Fahrenheit.

#include<stdio.h>
int main(){

    float F,C;
    printf("Enter the temp. in celsius= ");
    scanf("%f",&C);
    
    F=((9.0/5.0)*C)+32;
    
    printf("The temp. in fahrenheit is %f",F);
    
    return 0;
}