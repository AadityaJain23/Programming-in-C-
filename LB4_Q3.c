/*Write a program to print the multiplication table of the number entered by the user.
 It should be in the correct formatting. Num * 1 = Num*/

 #include<stdio.h>
 int main(){

    int n,i,prod;
    printf("Enter a number=");
    scanf("%d",&n);

    for(i=1;i<=10;i++){
        prod=n*i;
        printf("%d * %d = %d \n",n,i,prod);
    }


    return 0;
 }