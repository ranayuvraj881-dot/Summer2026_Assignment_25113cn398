#include <stdio.h>


int main()
{
    int num, temp, count = 0;

    printf("Enter the number: ");
    scanf("%d", &num);

    temp = num;

    while(temp > 0)
    {
        temp = temp / 10;
        count++;
    }

    printf("The number of digits in %d is %d", num, count);

    return 0;
}