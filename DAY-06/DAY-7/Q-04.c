//write a program to find x^n with using pow()
#include<stdio.h>
int main(){
    int x, n;
    printf("Enter base (x) and exponent (n): ");
    scanf("%d %d", &x, &n);
    int result = 1;
    for (int i = 0; i < n; i++) {
        result *= x;
    }
    printf("%d^%d = %d", x, n, result);
    return 0;
}