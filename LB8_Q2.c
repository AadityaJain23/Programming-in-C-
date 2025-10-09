/* Declare a local variable inside a function and try to access it outside the function.
Compare this with accessing the global variable from within the function.*/

#include<stdio.h>

int globalVar = 100;

void localDemo(){
    int localVar = 50;
    printf("Inside localDemo = %d\n",localVar);
}

void globalDemo(){
    printf("Inside globalDemo = %d\n",globalVar);
}

int main(){

    printf("In main : gloablVar = %d\n",globalVar);
    localDemo();
    
    //printf("In main : localVar = %d\n",localVar); Error: localVar is not declared in this main function.
    globalDemo();

    return 0;
}