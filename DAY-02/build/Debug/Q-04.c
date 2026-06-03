//write a program to check whether a number is palindrome or not
#include<stdio.h>   
int main()  
{
    int n,r,rev=0,temp;
    printf("Enter a number: ");
    scanf("%d",&n);     
    temp=n; 
    while(n>0)
    
    {
        r=n%10;
        rev=rev*10+r;
        n/=10;
    }
    if(temp==rev)
        printf("The number is a palindrome.");
    else
        printf("The number is not a palindrome.");
    
    return 0;
}