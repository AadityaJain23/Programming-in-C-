// Write a program to calculate compund interest //

#include<stdio.h>
#include<math.h>
int main(){

    float P,R,T,CI;
    printf("Enter the value of P= ");
    scanf("%f",&P);
    printf("Enter the value of R= ");
    scanf("%f",&R);
    printf("Enter the value of T= ");
    scanf("%f",&T);

    CI=P*pow(1+R/100,T)-P;

    printf("Compund Interest is %f \n",CI);

    return 0;
}
