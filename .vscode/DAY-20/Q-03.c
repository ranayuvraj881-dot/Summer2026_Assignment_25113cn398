//write a program to find row wise sum of a matrix
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

    // Find row-wise sum
    printf("Row-wise sums:\n");
    for(i = 0; i < r; i++) {
        int sum = 0;
        for(j = 0; j < c; j++) {
            sum += mat[i][j];
        }
        printf("Sum of row %d: %d\n", i + 1, sum);
    }

    return 0;
}