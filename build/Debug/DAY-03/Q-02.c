//write a program tp print prime number in a range
#include<stdio.h>
int main(){
    int i,j,n1,n2,flag;
    printf("Enter the range (n1 n2): ");
    scanf("%d %d",&n1,&n2);     
    printf("Prime numbers between %d and %d are: ",n1,n2);
    for(i=n1;i<=n2;i++)
    {
        if(i<=1)
            continue; 
        flag=0;
        for(j=2;j<=i/2;j++)
        {
            if(i%j==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
            printf("%d ",i);
    }
    
    return 0;
}