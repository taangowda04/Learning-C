// Mc Carthy's 91 problem
#include<stdio.h>
int output(int n)
{
    if(n>100)
    return n-10;
    return output(output(n+11));
}
int main()
{
    int n;
    printf("Enter n value:");
    scanf("%d",&n);
    printf("%d",output(n));
}