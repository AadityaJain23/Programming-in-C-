/* Perform pointer arithmetic (increment and decrement) on pointers of different data types. 
Observe how the memory addresses change and the effects on data access. */

#include <stdio.h>
int main() {

    int x = 10;
    float y = 20.5;
    char z = 'A';

    int *p1 = &x;
    float *p2 = &y;
    char *p3 = &z;

    printf("Original addresses:\n");
    printf("p1 (int)  = %d\n", p1);
    printf("p2 (float)= %d\n", p2);
    printf("p3 (char) = %d\n", p3);

    p1++;  
    p2++;
    p3++;

    printf("\nAfter increment:\n");
    printf("p1 (int)  = %d \n", p1);
    printf("p2 (float)= %d \n", p2);
    printf("p3 (char) = %d \n", p3);

    p1--;
    p2--;
    p3--;

    printf("\nAfter decrement (back to original):\n");
    printf("p1 (int)  = %d\n", p1);
    printf("p2 (float)= %d\n", p2);
    printf("p3 (char) = %d\n", p3);

    printf("\nValues pointed after returning back:\n");
    printf("*p1 = %d\n", *p1);
    printf("*p2 = %.2f\n", *p2);
    printf("*p3 = %c\n", *p3);

    return 0;
}
