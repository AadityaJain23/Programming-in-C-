/* Write a program to convert given number of days into years, months & days format.
(WE CONSIDER THAT EVERY MONTH IS OF 30 DAYS)*/

#include<stdio.h>
int main(){

    int D,Y,M,RD;
    printf("Enter the no. of days= ");
    scanf("%d",&D);

    Y=D/360;
    RD=D%360;
    M=RD/30;
    RD=RD%30;

    printf("%d years, %d months, %d days\n", Y, M, RD);

    return 0;
}
