#include<stdio.h>
int main()
{
    int n=6,j,i;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
        printf("*");
        }
        printf("\n");
    }
}