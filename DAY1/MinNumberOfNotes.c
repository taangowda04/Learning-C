#include <stdio.h>

int main()
{
    int n, count = 0;
    printf("Enter the change: ");
    scanf("%d", &n);

    int notes[] = {100, 50, 20, 10, 5, 2, 1};

    for (int i = 0; i < 7; i++)
    {
        if (n >= notes[i])
        {
            count += n / notes[i];
            n = n % notes[i];
        }
    }

    printf("Minimum number of notes = %d\n", count);

    return 0;
}