// Search in a sorted array using binary search.

#include <stdio.h>
int binarySearch(int arr[], int low, int high, int key){
    if(low > high){
        return -1;
    } 
    
    int mid = (low + high) / 2;

    if(arr[mid] == key){
        return mid;
    }else if(arr[mid] < key){
        return binarySearch(arr, mid + 1, high, key); 
    }else{
        return binarySearch(arr, low, mid - 1, key);
    }
}
    int main() {
    int n, key, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements of the sorted array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    int found = binarySearch(arr, 0, n - 1, key);

    if (found != -1)
        printf("Found at index %d\n", found);
    else
        printf("-1\n");

    return 0;
}
