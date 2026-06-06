write a program to chrck strong number
#include<stdio.h>
int main(){
    int n, i, sum = 0, temp, fact;
    printf("Enter a number: ");
    scanf("%d", &n);
    temp = n;
    while(temp > 0){
        fact = 1;
        for(i = 1; i <= temp % 10; i++){
            fact *= i;
        }
        sum += fact;
        temp /= 10;
    }
    if(sum == n){
        printf("%d is a strong number.", n);
    }
    else{
        printf("%d is not a strong number.", n);
    }
    return 0;
}