#include<stdio.h>

int main()
{
    int n=5, i, j;

    for(i=1; i<=n; i++)
    {
        // Leading spaces
        for(j=1; j<=n-i; j++)
        {
            printf(" ");
        }

        // Stars and inner spaces
        for(j=1; j<=i; j++)
        {
            if(j==1 || j==i || i==n)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }

        printf("\n");
    }

    return 0;
}