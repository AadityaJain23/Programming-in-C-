/* Write a function that accepts pointers as parameters. 
Pass variables by reference using pointers and modify their values within the function. */

#include <stdio.h>

void updateValues(int *a, float *b, char *c){
    *a = *a + 10;    
    *b = *b * 2;       
    *c = 'Z';          
}

int main(){
    int x = 5;
    float y = 3.5;
    char z = 'A';

    printf("Before function call:\n");
    printf("x = %d\n", x);
    printf("y = %.2f\n", y);
    printf("z = %c\n", z);

    updateValues(&x, &y, &z);

    printf("\nAfter function call:\n");
    printf("x = %d\n", x);     
    printf("y = %.2f\n", y);   
    printf("z = %c\n", z);     

    return 0;
}
