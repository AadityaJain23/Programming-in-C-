// Search for an element in an array using linear search.

#include<stdio.h>
int main(){

    int i, n, arr[100], key, found = 0;
    printf("Enter the number of elements in array = ");
    scanf("%d",&n);
    
    printf("Enter %d integers = ",n);
    for(i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }

    printf("Enter element to be search = ");
    scanf("%d",&key);

    for(i = 0; i < n; i++){
        if(key == arr[i]){
            found = i;
            break;
        }
    }

    if(found != 0){
        printf("Found at index %d \n", found);
    }else{
        printf("Element not present.\n");
    }
        
    return 0;
}