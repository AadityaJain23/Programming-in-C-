// Write a program to check if a entered year is leap or not.

#include<stdio.h>
int main(){

    int Y;
    printf("Enter the year= ");
    scanf("%d",&Y);

    if ((Y % 400 == 0) || (Y % 4 == 0) && (Y % 100 != 0)) {
        printf("%d is a Leap Year.\n", Y);
    } else {
        printf("%d is Not a Leap Year.\n", Y);
    }
    return 0;
}

