//write a program to find the frequency of an element in an array
#include <stdio.h>

int main() {
    int arr[100], n, key, i, count = 0;

    // Input size of array
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input element to search
    printf("Enter element to search: ");
    scanf("%d", &key);

    // Count frequency
    for(i = 0; i < n; i++) {
        if(arr[i] == key) {
            count++;
        }
    }

    printf("Frequency of %d in the array is %d\n", key, count);

    return 0;
}
