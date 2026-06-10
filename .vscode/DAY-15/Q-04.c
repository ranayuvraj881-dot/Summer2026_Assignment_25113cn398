//write a program to move zeroes to end.

#include <stdio.h>
int main() {
    int arr[100], n, i, j = 0;

    // Input size of array
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Move zeroes to end
    for(i = 0; i < n; i++) {
        if(arr[i] != 0) {
            arr[j++] = arr[i];
        }
    }
    
    while(j < n) {
        arr[j++] = 0;
    }

    // Print the modified array
    printf("Array after moving zeroes to end:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}