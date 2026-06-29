//write a program to find pair with given sum
#include <stdio.h>

int main() {
    int n, sum;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the target sum: ");
    scanf("%d", &sum);

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == sum) {
                printf("Pair with given sum found: %d and %d\n", arr[i], arr[j]);
                return 0;
            }
        }
    }
    printf("No pair with given sum found.\n");
    return 0;
}