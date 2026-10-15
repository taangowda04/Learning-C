#include<stdio.h>
#include<stdlib.h>
int main()
{
    // n=5 before typecasting garbage values gonna be as string
    int *ptr=(int*)malloc(5*sizeof(int));
    ptr[0]=1;
    free(ptr);
}