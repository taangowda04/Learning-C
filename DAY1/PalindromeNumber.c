#include <stdbool.h>
#include <stdio.h>
bool isPalindrome(int x)
{
    if (x < 0)
        return false;

    int temp = x,rev = 0;

    while (x > 0)
    {
        int n = x % 10;
        rev = rev * 10 + n;
        x = x / 10;
    }

    return temp == rev;
}
int main()
{
    int x;
    scanf("%d",&x);
    if(isPalindrome(x))
    printf("True");
    else
    printf("False");
}