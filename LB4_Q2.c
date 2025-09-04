/*Write a program to enter numbers till the user wants. 
At the end, it should display thecount of positive, negative, and Zeroes entered.*/ 

#include<stdio.h>
int main(){
    int v,n,pos=0,neg=0,zer=0;

    while(1){
        printf("Do you want to enter a number, please enter 1 for yes and 0 for no=");
        scanf("%d",&v);
        
        if(v==1){
            printf("Enter a number=");
            scanf("%d",&n);
            if(n>0){
                pos++;
            }else if(n<0){
                neg++;
            }else{
                zer++;
            }
        }else if(v==0){
            break;
        }else{
            printf("You have entered a wrong no.\n");
        }
    }

    printf("Count of postive no.=%d \n",pos);
    printf("Count of negative no.=%d \n",neg);
    printf("Count of zero no.=%d \n",zer);
    
    return 0;
}