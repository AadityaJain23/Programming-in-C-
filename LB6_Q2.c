// Write a C program to count and diaplay postive, negative, odd, even numbers in an array.

#include<stdio.h>
int main(){

    int arr[100];
    int n, i, positive = 0, negative = 0;
    int even = 0, odd = 0, zero = 0;

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


    for(i = 0; i < n; i++){
    //Count positive and negative.
    if(arr[i] > 0){
        positive++;
    } else if(arr[i] < 0){
        negative++;
    } else{
        zero++;
    }

    //Cound odd and even.
    if(arr[i] != 0){
    if(arr[i] % 2 == 0){
        even++;
    } else{
        odd++;
    }
}
    }

    //Output the results.
    printf("Count of positive numbers = %d \n",positive);
    printf("Count of negative numbers = %d \n",negative);
    printf("Count of zero numbers = %d \n",zero);
    printf("Count of even numbers = %d \n",even);
    printf("Count of odd numbers = %d \n",odd);
    
    return 0;
}