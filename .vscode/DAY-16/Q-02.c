//write a program to find maximum frequency element in an array.
#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int maxFreq = 0;
    int maxElement = arr[0];

    for (int i = 0; i < n; i++) {
        int freq = 0;
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                freq++;
            }
        }
        if (freq > maxFreq) {
            maxFreq = freq;
            maxElement = arr[i];
        }
    }

    printf("The element with maximum frequency is: %d\n", maxElement);
    printf("Its frequency is: %d\n", maxFreq);
    return 0;
}