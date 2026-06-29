//write a program to find missing number in an array of size n containing numbers from 1 to n with one missing number.
#include <stdio.h>

int findMissingNumber(int arr[], int n) {
    int total = n * (n + 1) / 2;
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return total - sum;
}

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int missing = findMissingNumber(arr, n);
    printf("The missing number is: %d\n", missing);
    return 0;
}