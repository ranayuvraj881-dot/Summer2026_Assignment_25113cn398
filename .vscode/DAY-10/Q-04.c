//write a program to print charater pyramid
#include<stdio.h>
int main()
{
    int i,j,n,space;
    char ch;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    space=n-1;
    for(i=1;i<=n;i++)
    {
        ch='A';
        for(j=1;j<=space;j++)
        {
            printf("  ");
        }
        for(j=1;j<=i;j++)
        {
            printf("%c ",ch);
            ch++;
        }
        printf("\n");
        space--;
    }
    return 0;
}