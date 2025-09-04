/*According to the gregorian calendar, it was Monday on the date 01/01/01. 
If Any year is input through the key board write a program to find out what is the day on 1st Jannary of this year*/ 

#include<stdio.h>
int main(){

    int year,i,days=0,reqday;
    printf("Enter the year=");
    scanf("%d",&year);

    for( i=1 ; i<year ; i++){
        if( i%400==0 || i%4==0 && i%100 !=0){
            days+=366;
        }else{
            days+=356;
        }
    }

    reqday= days%7;

    switch (reqday){
    case 0:
        printf("1st January %d is Monday.",year);
        break;
    case 1:
        printf("1st January %d is Tuesday.",year);
        break;
    case 2:
        printf("1st January %d is Wednesday.",year);
        break;
    case 3:
        printf("1st January %d is Thursday.",year);
        break;
    case 4:
        printf("1st January %d is Friday.",year);
        break;
    case 5:
        printf("1st January %d is Saturday.",year);
        break;
    case 6:
        printf("1st January %d is Sunday.",year);
        break;
    }

    return 0;
}