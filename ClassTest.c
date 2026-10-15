#include <stdio.h>
#define n 3

int *rotate(int matrix[n][n])
{
    static int result[n * n];
    int k = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = n - 1; j >= 0; j--)
        {
            result[k++] = matrix[j][i];
        }
    }

    return result;
}

int main()
{
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int *result = rotate(matrix);

    printf("After rotation:\n");

    for (int i = 0; i < n * n; i++)
    {
        printf("%d ", result[i]);

        if ((i + 1) % n == 0)
            printf("\n");
    }

    return 0;
}