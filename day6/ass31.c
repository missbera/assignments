#include <stdio.h>
int main()
{
    int n,i;
    printf("enter the number\n");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        int m=i*n;
        printf("%d * %d =%d\n", i,n,m);
    }
    return 0;
}