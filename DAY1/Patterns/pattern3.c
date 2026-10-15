#include<stdio.h>
int main()
{
    int n=5,j,i,count;
    char ch ='A';
    for(int i=0;i<=n;i++)
    {
        for(j=i;j>0;j--)
        {
            printf("%c",'A'+j-1);
        }
        printf("\n");
    }
}