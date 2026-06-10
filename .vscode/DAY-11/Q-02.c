//write a program to write function to find maximum
#include<stdio.h>
int max(int a, int b) {
    return (a > b) ? a : b;
}
int main() {
    int x, y, result;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    result = max(x, y);
    printf("Maximum = %d\n", result);
    return 0;
}
