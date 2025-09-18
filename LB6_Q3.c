// Write a C program to find the frequency of a particular number in a list of integers.

#include<stdio.h>
int main(){

    int arr[100];
    int n, i;
    int num, count = 0;

    printf("Enter the number of elements (max. 100) = ");
    scanf("%d",&n);

    if (n < 1 || n > 100){
        printf("Please enter a valid number of elements between 1 and 100.\n");
        return 0;
    }

    printf("Enter %d integers = ", n);
    for(i = 0; i < n ; i++){
        scanf("%d",&arr[i]);
    }

    printf("Enter the number to find it's frequency = ");
    scanf("%d",&num);

    for(i = 0; i< n; i++){
        if(arr[i] == num){
            count++;
        }
    }

    if(count == 0){
        printf("The number %d is not present in the list.",num);
    } else{
        printf("The frequency of %d is = %d",num,count);
    }
    
    return 0;
}