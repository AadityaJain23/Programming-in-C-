/* Declare different types of pointers (int, float, char) and initialize them with the addresses of variables. 
Print the values of both the pointers and the variablesthey point to. */

#include <stdio.h>
int main() {

    int a = 10;
    float b = 3.14;
    char c = 'X';

    int *p1 = &a;     
    float *p2 = &b;   
    char *p3 = &c;    
  
    printf("Value of a: %d\n", a);
    printf("Value of b: %.2f\n", b);
    printf("Value of c: %c\n", c);

    printf("\nAddress of a: %p\n", p1);
    printf("Address of b: %p\n", p2);
    printf("Address of c): %p\n", p3);

    printf("\nValue pointed by p1: %d\n", *p1);
    printf("Value pointed by p2: %.2f\n", *p2);
    printf("Value pointed by p3: %c\n", *p3);

    return 0;
}
