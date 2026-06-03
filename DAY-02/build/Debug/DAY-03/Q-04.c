//write a program to print armstrong number in a range
#include<stdio.h>
int main()
{
    int i,j,n1,n2,r,sum,temp;
    printf("Enter the range (n1 n2): ");
    scanf("%d %d",&n1,&n2);     
    printf("Armstrong numbers between %d and %d are: ",n1,n2);
    for(i=n1;i<=n2;i++)
    {
        temp=i; 
        sum=0;
        while(temp>0)
        {
            r=temp%10;
            sum+=r*r*r;
            temp/=10;
        }
        if(i==sum)
            printf("%d ",i);
    }
    
    return 0;
}