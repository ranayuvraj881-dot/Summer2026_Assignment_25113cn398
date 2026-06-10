//write a program to rotate array right by d positions
#include <stdio.h>
int main() {
    int arr[100], n, d, i, j, temp;

    // Input size of array
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input number of positions to rotate
    printf("Enter number of positions to rotate right: ");
    scanf("%d", &d);

    // Rotate the array right by d positions
    for(i = 0; i < d; i++) {
        temp = arr[n - 1];
        for(j = n - 1; j > 0; j--) {
            arr[j] = arr[j - 1];
        }
        arr[0] = temp;
    }

    // Print the rotated array
    printf("Array after right rotation:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}