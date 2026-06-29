//write a program to find diagonal sum of a matrix
#include <stdio.h>

int main() {
    int n, i, j;
    int sum = 0;

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

    // Calculate diagonal sum
    for(i = 0; i < n; i++) {
        sum += mat[i][i];  // Primary diagonal
    }

    // Print the result
    printf("Diagonal sum of the matrix is: %d\n", sum);

    return 0;
}