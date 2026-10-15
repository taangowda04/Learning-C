#include<stdio.h>
#define n 3
int * rotate(int **matrix)
{
    int r=n,c=n,i,k=0;
    int top=0,right=n-1,bottom=n-1,left=0;
    static int result[n*n];
    while(top>=bottom && left<=right)
    {
        //left(from bottom) to top
        for(i=bottom;i>=top;i--)
        {
            result[k++]=matrix[i][left];
        }
        left++;
    }
    return result;
}
int main()
{
    int matrix[3][3]={
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    int *testmatrix[n*n];
    for(int i=0;i<n;i++)
    {
        testmatrix[i]=matrix[i];
    }
    int *result=rotate(matrix);
    printf("After rotation");
    for (int i = 0; i < n* n; i++)
    {
        printf("%d ", result[i]);
        if((i+1)%3==0)
        {
            printf("\n");
        }
    }

}