//write a program to count even and odd numbers in an array
#include<stdio.h>
int main() {
    int arr[10], n, evenCount = 0, oddCount = 0;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }
    
    printf("Even numbers count = %d\n", evenCount);
    printf("Odd numbers count = %d\n", oddCount);
    
    return 0;
}