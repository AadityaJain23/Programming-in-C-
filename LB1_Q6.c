// Write a program to calculate simple interest //

#include<stdio.h>
int main(){
float P, R, T;
float SI;
printf("Enter the value of P= ");
scanf("%f", &P);
printf("Enter the value of R= ");
scanf("%f", &R);
printf("Enter the value of T= ");
scanf("%f", &T);

SI=(P*R*T)/100;

printf("SI is= %f ", SI);



return 0;
}
