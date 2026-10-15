#include<stdio.h>
int main()
{
    int n=5,i,j;
    for(i=n;i>=0;i--)
    {
        for(j=0;j<i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}