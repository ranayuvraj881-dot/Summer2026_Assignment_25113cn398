//write a program to find nth fibonacci term
#include<stdio.h>
int main()
{
    int n,t1=0,t2=1,nextTerm,i;
    printf("Enter the term number: ");
    scanf("%d",&n);     
    if(n==1)
        printf("The %dth term is: %d",n,t1);
    else if(n==2)
        printf("The %dth term is: %d",n,t2);
    else
    {
        for(i=3;i<=n;i++)
        {
            nextTerm=t1+t2;
            t1=t2;
            t2=nextTerm;
        }
        printf("The %dth term is: %d",n,nextTerm);
    }
    
    return 0;
}