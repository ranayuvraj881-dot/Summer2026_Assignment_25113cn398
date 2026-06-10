//write a program to print reverse pyramid
#include<stdio.h>
int main()
{
    int i,j,n,space;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    space=0;
    for(i=n;i>=1;i--)
    {
        for(j=1;j<=space;j++)
        {
            printf("  ");
        }
        for(j=1;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");
        space++;
    }
    return 0;
}