//write a program to find duplicates in an array
#include <stdio.h>
int main() {
    int arr[100], n, i, j;
    
    // Input size of array
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    // Input array elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Duplicate elements in the array are:\n");
    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                printf("%d\n", arr[i]);
                break; // To avoid printing the same duplicate multiple times
            }
        }
    }
    
    return 0;
}