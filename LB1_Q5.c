/*  Write a program to perform thw following operations and print the result 
    1. a*b*c
    2. a+b+c
    3. a-b-c
    4. (a+b)*c
     5. a/b       */


       #include<stdio.h>
       int main(){
       int a,b,c;

       printf("Enter the value of a= ");
       scanf("%d",&a);
       printf("Enter the value of b= ");
       scanf("%d",&b);
       printf("Enter the value of c= ");
       scanf("%d",&c);
       
       printf("1. A*B*C= %d \t", a*b*c);
       printf("2. A+B+C= %d \n", a+b+c);
       printf("3. A-B-C= %d \n", a-b-c);
       printf("4. (A+B)*C= %d \n", (a+b)*c);
       printf("5. A/B= %d \n", a/b);



        return 0;
       }