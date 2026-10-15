#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n<0)
    printf("False");
    else
    {
while(n%4==0)
{
    n=n/4;
}
if(n==1)
printf("True");
else
printf("False");
}
}