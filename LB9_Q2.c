/* Develop a C function ISPRIME(num) that accepts an integer and retuen 1 if 'num' is prime else 0.
WAP to invoke the function ISPIME to generate prime numbers for a fiven range.*/

#include <stdio.h>
int ISPRIME(int num){
    
    if(num <= 1)
        return 0; 

    for(int i = 2; i * i <= num; i++){
        if(num % i == 0)
            return 0;  
    }
    return 1;  
}

int main(){
    int start, end;

    printf("Enter the range (start end): ");
    scanf("%d %d", &start, &end);

    printf("Prime numbers between %d and %d are:\n", start, end);

    for(int i = start; i <= end; i++){
        if(ISPRIME(i)){
            printf("%d ", i);
        }
    }

    return 0;
}
