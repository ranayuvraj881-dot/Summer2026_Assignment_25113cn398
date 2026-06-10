//write a program to rotate array left by d positions
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
    printf("Enter number of positions to rotate left: ");
    scanf("%d", &d);

    // Rotate the array left by d positions
    for(i = 0; i < d; i++) {
        temp = arr[0];
        for(j = 0; j < n - 1; j++) {
            arr[j] = arr[j + 1];
        }
        arr[n - 1] = temp;
    }

    // Print the rotated array
    printf("Array after left rotation:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}