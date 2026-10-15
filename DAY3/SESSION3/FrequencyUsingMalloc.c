#include<stdio.h>
#include<stdlib.h>
int main()
{
    int digit,num;
    scanf("%d",&num);
    int *freq=malloc(10*sizeof(int));
    for(int i=0;i<10;i++){
        freq[i]=0;
    }
    if(num==0)
    {
        freq[0]=1;
    }
    while (num != 0)
    {
        digit = abs(num % 10);
        freq[digit]++;
        num /= 10;
    }
    printf("Digit frequencies:\n");
    for (int i = 0; i < 10; i++)
    {
        if (freq[i] > 0)
        {
            printf("%d occurs %d times\n", i, freq[i]);
        }
    }
    free(freq);
    return 0;
}