#include<stdio.h>
int climb(int n)
{
    if(n==0||n==1)
    return 1;
    return climb(n-1)+climb(n-2);
}
int main()
{
    printf("%d",climb(4));
}
// 1ST call-main=climb(4)
//climb(3)+clim(2)
//clim(2)+clim(1)  ||   climb(1)+climb(0)
//climb(1)+clim(0) + climb(1)  ||  climb(1)+climb(0)