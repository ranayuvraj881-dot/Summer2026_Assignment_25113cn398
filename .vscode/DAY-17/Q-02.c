//write a program to union of arrays
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

    int unionArr[n1 + n2];
    int unionCount = 0;

    // Add elements from first array
    for (int i = 0; i < n1; i++) {
        unionArr[unionCount] = arr1[i];
        unionCount++;
    }

    // Add elements from second array if not already present
    for (int i = 0; i < n2; i++) {
        int isPresent = 0;
        for (int j = 0; j < unionCount; j++) {
            if (unionArr[j] == arr2[i]) {
                isPresent = 1;
                break;
            }
        }
        if (!isPresent) {
            unionArr[unionCount] = arr2[i];
            unionCount++;
        }
    }

    printf("Union of the arrays: ");
    for (int i = 0; i < unionCount; i++) {
        printf("%d ", unionArr[i]);
    }
    printf("\n");
    return 0;
}