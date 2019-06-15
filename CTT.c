#include <stdio.h>
int main()
{
   int a[3],b[3],alice=0,bob=0,i;
   for(i=0; i<=2; i++)
   {
       scanf("%d",&a[i]);
       if(i>100)
       {
           scanf("%d",&a[i]);
       }
   }
   for(i=0; i<=2; i++)
   {
       scanf("%d",&b[i]);
       if(i>100)
       {
           scanf("%d",&b[i]);
       }
   }

   for(i=0; i<=2; i++)
   {
       if(a[i]>b[i])
       {
           alice++;
       }
       else if(a[i]<b[i])
       {
           bob++;
       }
   }

   printf("%d %d",alice,bob);
   return 0;
}
