//write a program to convert binary to decimal
#include<stdio.h>   
int main(){
    int n, decimal = 0, base = 1;
    printf("Enter a binary number: ");
    scanf("%d", &n);
    while (n > 0) {
        int rem = n % 10;
        decimal += rem * base;
        n /= 10;
        base *= 2;
    }
    printf("Decimal representation: %d", decimal);
    return 0;
}