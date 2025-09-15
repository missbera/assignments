#include <stdio.h>
int main()
{
    int n,i, sum=0;
    printf("enter the range\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum+=i;
    }
    printf("required sum of the series=%d",sum);
    return 0;
}