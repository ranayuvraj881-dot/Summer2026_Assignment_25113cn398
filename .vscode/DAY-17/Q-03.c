//write a program to intersection of arrays
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

    int intersectionArr[n1 < n2 ? n1 : n2];
    int intersectionCount = 0;

    // Find intersection
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n2; j++) {
            if (arr1[i] == arr2[j]) {
                intersectionArr[intersectionCount] = arr1[i];
                intersectionCount++;
                break;
            }
        }
    }

    printf("Intersection of the arrays: ");
    for (int i = 0; i < intersectionCount; i++) {
        printf("%d ", intersectionArr[i]);
    }
    printf("\n");
    return 0;
}