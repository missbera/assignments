#include <stdio.h>
int main()
{
   int n,i,f=1;
   printf("enter the number\n");
   scanf("%d",&n);
   if(n<0)
   {
       printf(" factorial of a negative number doesnt exists.\n");
   }
   else
   {
       for(i=1;i<=n;i++)
       {
           f=f*i;
       }
       printf("factorial of %d=%d", n,f);
   }
   return 0;
}