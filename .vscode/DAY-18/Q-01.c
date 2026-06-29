//write a program to merge arrays
#include <stdio.h>

int main() {
    int n1, n2;
    printf("Enter the size of the first array: ");
    scanf("%d", &n1);
    int arr1[n1];
    printf("Enter the elements of the first array: ");
    for (int i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }
    printf("Enter the size of the second array: ");
    scanf("%d", &n2);
    int arr2[n2];
    printf("Enter the elements of the second array: ");
    for (int i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    int mergeArr[n1 + n2];
    int mergeCount = 0;

    // Merge arrays
    for (int i = 0; i < n1; i++) {
        mergeArr[mergeCount] = arr1[i];
        mergeCount++;
    }
    for (int i = 0; i < n2; i++) {
        mergeArr[mergeCount] = arr2[i];
        mergeCount++;
    }

    printf("Merged array: ");
    for (int i = 0; i < mergeCount; i++) {
        printf("%d ", mergeArr[i]);
    }
    printf("\n");
    return 0;
}