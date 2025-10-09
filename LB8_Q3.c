/* Declare variables within different code blocks (enclosed by curly braces) and test 
their accessibility within and outside those blocks */

#include <stdio.h>

int main(){
 
 int x = 10; 
 printf("x in main: %d\n", x); 
 
 {
 int y = 20;
 printf("Inside Block 1:\n");
 printf("x = %d\n", x); 
 printf("y = %d\n", y); 
 }
 // printf("y = %d\n", y); // Error: y is not declared in this scope
 
 {
 int z = 30;
 printf("Inside Block 2:\n");
 printf("x = %d\n", x); 
 printf("z = %d\n", z); 
 // printf("z = %d\n", z); // Error: z is not declared in this scope
 }
 
 {
 int x = 100; 
 printf("Inside Block 3 (x is re-declared):\n");
 printf("x = %d\n", x); 
 }
 
 printf("Back in main:\n");
 printf("x = %d\n", x); 
 
 return 0;
}
