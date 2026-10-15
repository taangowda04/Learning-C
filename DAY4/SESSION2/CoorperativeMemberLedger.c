#include<stdio.h>
struct address
{
    char village[200];
    int pincode;
};
typedef struct
{
    int id;
    char name[100];
    float share_capital;
    struct address a;
}Member;
int main()
{
   Member m[200];
   int n;
   printf("Enter the number of members:");
   scanf("%d",&n);
   if(n<=0 ||n>200)
   {
    printf("Invalid count");
    return 0;
   }
   printf("enter details:\n");
   for(int i=0;i<n;i++)
   {
    scanf("%d",&m[i].id);
    scanf("%99s",m[i].name);
    scanf("%f",&m[i].share_capital);
    scanf("%199s",m[i].a.village);
    scanf("%d",&m[i].a.pincode);
   }
   printf("Member Ledger:\n");
   for(int i=0;i<n;i++)
   {
    printf("%d ",m[i].id);
    printf("%s ",m[i].name);
    printf("%.2f ",m[i].share_capital);
    printf("%s ",m[i].a.village);
    printf("%d ",m[i].a.pincode);
    printf("\n");
   }
   int high=0;
   float tol=0;
   for(int i=0;i<n;i++)
   {
    if(m[i].share_capital > m[high].share_capital)
    {
        high=i;
    }
    tol+=m[i].share_capital;
   }
   printf("Total share capital :%.2f\n",tol);
   for(int i=0;i<n;i++)
   {
    if(m[i].share_capital==m[high].share_capital)
    {
        printf("Highest Share Holder: %d %s %s %d %.2f\n",
    m[i].id,
    m[i].name,
    m[i].a.village,
    m[i].a.pincode,
    m[i].share_capital);
    }
   }
   return 0;
}
