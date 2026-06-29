//write a program to transpose a matrix
#include <stdio.h>  

int main() {
    int r, c, i, j;

    // Input dimensions of the matrix
    printf("Enter rows and columns of the matrix: ");
    scanf("%d %d", &r, &c);

    // Input matrix elements
    int mat[r][c];
    printf("Enter elements of the matrix:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    // Transpose the matrix
    int transposed[c][r];
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            transposed[j][i] = mat[i][j];
        }
    }

    // Print the transposed matrix
    printf("Transposed matrix:\n");
    for(i = 0; i < c; i++) {
        for(j = 0; j < r; j++) {
            printf("%d ", transposed[i][j]);
        }
        printf("\n");
    }

    return 0;
}