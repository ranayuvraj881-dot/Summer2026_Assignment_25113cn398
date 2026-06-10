//write a program to find second kargest element in an array
#include <stdio.h>
int main() {
    int arr[100], n, i, largest, secondLargest;
    
    // Input size of array
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    // Input array elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Initialize largest and second largest
    largest = secondLargest = arr[0];
    
    for(i = 1; i < n; i++) {
        if(arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if(arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }
    
    if(secondLargest == largest) {
        printf("There is no second largest element.\n");
    } else {
        printf("Second largest element is %d\n", secondLargest);
    }
    
    return 0;
}