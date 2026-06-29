//write a program to check symmetric matrix
#include <stdio.h>

int main() {
    int n, i, j;
    int isSymmetric = 1;

    // Input size of the square matrix
    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);

    // Input matrix elements
    int mat[n][n];
    printf("Enter elements of the matrix:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    // Check if the matrix is symmetric
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            if(mat[i][j] != mat[j][i]) {
                isSymmetric = 0;
                break;
            }
        }
        if(!isSymmetric) {
            break;
        }
    }

    // Print the result
    if(isSymmetric) {
        printf("The matrix is symmetric.\n");
    } else {
        printf("The matrix is not symmetric.\n");
    }

    return 0;
}