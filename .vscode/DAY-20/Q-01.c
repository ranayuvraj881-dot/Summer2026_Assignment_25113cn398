//write a program to multiplication of two matrices
#include <stdio.h>
int main() {
    int r1, c1, r2, c2;

    // Input dimensions of first matrix
    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d", &r1, &c1);
    int mat1[r1][c1];
    printf("Enter elements of first matrix:\n");
    for(int i = 0; i < r1; i++) {
        for(int j = 0; j < c1; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }

    // Input dimensions of second matrix
    printf("Enter rows and columns of second matrix: ");
    scanf("%d %d", &r2, &c2);
    if(c1 != r2) {
        printf("Matrices cannot be multiplied due to dimension mismatch.\n");
        return 0;
    }
    int mat2[r2][c2];
    printf("Enter elements of second matrix:\n");
    for(int i = 0; i < r2; i++) {
        for(int j = 0; j < c2; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }

    // Multiplying matrices
    int product[r1][c2];
    for(int i = 0; i < r1; i++) {
        for(int j = 0; j < c2; j++) {
            product[i][j] = 0;
            for(int k = 0; k < c1; k++) {
                product[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }

    // Print the result
    printf("Product of the matrices:\n");
    for(int i = 0; i < r1; i++) {
        for(int j = 0; j < c2; j++) {
            printf("%d ", product[i][j]);
        }
        printf("\n");
    }

    return 0;
}