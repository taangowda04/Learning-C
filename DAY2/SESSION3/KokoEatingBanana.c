#include<stdio.h>
int minEatingSpeed(int* piles, int pilesSize, int h) {
    int beg = 1, end = 0;

    for (int i = 0; i < pilesSize; i++) {
        if (piles[i] > end)
            end = piles[i];
    }

    while (beg <= end) {
        int mid = beg + (end - beg) / 2;
        long long hr = 0;

        for (int i = 0; i < pilesSize; i++) {
            hr += (piles[i] + (long long)mid - 1) / mid;
        }

        if (hr <= h)
            end = mid - 1;
        else
            beg = mid + 1;
    }

    return beg;
}
int main()
{
    int bunches[]={3,6,7,11};
    int h=8,n;
    n=sizeof(bunches)/sizeof(int);
    printf("%d is the hours.",minEatingSpeed(bunches,n,h));
}