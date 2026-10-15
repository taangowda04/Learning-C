#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr=malloc(sizeof(int));
    *ptr=100l;
    printf("%d\n",*ptr);
    free(ptr);
    printf("%p",ptr);
}