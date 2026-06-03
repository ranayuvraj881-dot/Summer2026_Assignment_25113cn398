//write a program to set bits in a number
#include<stdio.h>
int main()
{
    int n,pos;
    printf("Enter a number: ");
    scanf("%d",&n);     
    printf("Enter the position to set bit: ");
    scanf("%d",&pos);
    
    n=n|(1<<pos);
    
    printf("Number after setting bit at position %d: %d",pos,n);
    return 0;
}