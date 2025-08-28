// Write a program to check three points (x1,y1) , (x2,y2) , (x3,y3) are collinear or not.

#include<stdio.h>
int main(){

    int x1,y1,x2,y2,x3,y3,S1,S2;
    printf("Enter the coordinate of (x1,y1) = ");
    scanf("%d %d",&x1,&y1);
    printf("Enter the coordinate of (x2,y2) = ");
    scanf("%d %d",&x2,&y2);
    printf("Enter the coordinate of (x3,y3) = ");
    scanf("%d %d",&x3,&y3);

    if((y2-y1)*(x3-x2)==(y3-y2)*(x2-x1)){
        printf("They are collinear.");
    }else{
        printf("They are not collinear.");
    }
    
    return 0;
}