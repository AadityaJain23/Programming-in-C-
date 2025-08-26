// Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

#include<stdio.h>
int main(){

    int l,b,Area,Perimeter;
    printf("Enter the length of rectangle (in cm)= ");
    scanf("%d",&l);
    printf("Enter the breadth of rectangle (in cm)= ");
    scanf("%d",&b);    

    Area=l*b;
    Perimeter=2*(l+b);

    printf("Area of rectangle is %d cm^2 \n",Area);
    printf("Perimeter of rectangle is %d cm ",Perimeter);

    return 0;
}