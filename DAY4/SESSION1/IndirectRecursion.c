#include<stdio.h>
void A(int n);
void B(int n);
// mutual recursion
// define the user-defined func before intitalizing itt
void A(int n)
{
    if(n>10)
    return;
    printf("%d\n",n);
    B(n+1);
}
void B(int n)
{
    if(n>10)
    {
        return;
    }
    printf("%d\n",n);
    A(n+1);
}
int main()
{
    B(0);
}