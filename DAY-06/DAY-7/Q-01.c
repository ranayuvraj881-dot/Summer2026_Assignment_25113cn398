
//write a program to convert decimal to binary
#include<stdio.h>
int main(){
    int n, binary = 0, base = 1;
    printf("Enter a decimal number: ");
    scanf("%d", &n);
    while (n > 0) {
        int rem = n % 2;
        binary += rem * base;
        n /= 2;
        base *= 10;
    }
    printf("Binary representation: %d", binary);
    return 0;
}