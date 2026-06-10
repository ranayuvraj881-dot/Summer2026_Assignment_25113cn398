//write a program to find sum and average of array
#include<stdio.h>
int main() {
    int arr[10], n, sum = 0;
    float average;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    
    average = (float)sum / n;
    
    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", average);
    
    return 0;
}