#include <stdio.h>
int n;
int main()
{
    // infinate loop until the stack is full

    n += 1;
    // recursive base
    if (n == 5)
    {
        return 0;
    }
    printf("%d", n);
    // recursive case
    main();
    return 0;
}