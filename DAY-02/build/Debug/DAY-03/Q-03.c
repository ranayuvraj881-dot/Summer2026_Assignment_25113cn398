//write a program to check armstrong number
#include<stdio.h>
int main()
{
    int n,r,sum=0,temp;
    printf("Enter a number: ");
    scanf("%d",&n);     
    temp=n; 
    while(n>0)
    
    {
        r=n%10;
        sum+=r*r*r;
        n/=10;
    }
    if(temp==sum)
        printf("The number is an armstrong number.");
    else
        printf("The number is not an armstrong number.");
    
    return 0;
}