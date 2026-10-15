#include<stdio.h>
int tribonacci(int n) {
    if(n==1 || n==2)
    return 1;
    if(n==0)
    return 0;
    return tribonacci(n-1)+tribonacci(n-2)+tribonacci(n-3);
}
int main()
{
    int n;
    printf("Enetr a number:");
    scanf("%d",&n);
    printf("%d",tribonacci(n));
}