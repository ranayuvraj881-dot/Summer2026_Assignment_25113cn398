//write a program to write function for armstrong
#include<stdio.h>
int isArmstrong(int num) {
    int originalNum = num, sum = 0, remainder;
    
    while (num > 0) {
        remainder = num % 10;
        sum += remainder * remainder * remainder;
        num /= 10;
    }
    
    return originalNum == sum;
}
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    if (isArmstrong(num)) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }
    
    return 0;
}