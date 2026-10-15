#include<stdio.h>
#include<stdlib.h>
typedef struct
{
    int t_no;
    char veh_reg[30];
    float gross;
    float tare;
}Ticket;
float netWeight(Ticket *t)
{
    return t->gross - t->tare;
}
void print(Ticket *t)
{
    printf("%d %s gross %.2f tare %.2f\n",
    t->t_no,
    t->veh_reg,
    t->gross,
    t->tare);
    printf("net %.2f\n",netWeight(t));
}
int main()
{
    int n;
    float total=0.0f;
    int hev=0;
    scanf("%d",&n);
    if(n <= 0 || n > 100000)
    {
        printf("Invalid count\n");
        return 0;
    }
    Ticket* t=(Ticket *)malloc(n*sizeof(Ticket));
    if(t==NULL)
    {
        return 0;
    }
    for(int i=0;i<n;i++)
    {
        scanf("%d",&t[i].t_no);
        scanf("%29s",t[i].veh_reg);
        scanf("%f",&t[i].gross);
        scanf("%f",&t[i].tare);
    }
    printf("WeighBridge Day Book\n");
    for(int i=0;i<n;i++)
    {
        print(&t[i]);
        float net=netWeight(&t[i]);
        total+=net;
        if(net>netWeight(&t[hev]))
        {
            hev=i;
        }
    }
    printf("Tickets:%d\n",n);
    printf("Total net weight: %.2f\n",total);
    printf("Heaviest net load: ticket %d %s %.2f\n",
    t[hev].t_no,
    t[hev].veh_reg,
    netWeight(&t[hev])
);
free(t);
t=NULL;
return 0;
}