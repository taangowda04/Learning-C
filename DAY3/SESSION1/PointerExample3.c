#include<stdio.h>
int main()
{
    int a=10,b=20,c=30,x=40;
    int *ptr[3]={&a,&b,&c};
    int *const p=&x;
    *p=50;
    printf("%d",x);
    const int *const pt=&x;
    //*pt=50; gonna be error

}