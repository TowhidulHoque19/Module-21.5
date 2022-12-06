#include<stdio.h>

int sum(int n,int a[])
{
    int sum=0,i=0;
    for(i=1; i<=n; i++)
        sum=sum+((a[i])%10)+((a[i])/1000);
    return sum;
}
int main()
{
    int n,i,ara[20],b=0;
    scanf("%d",&n);

    for(i=1; i<=n; i++)
        scanf("%d",&ara[i]);
    b=sum(n,ara);
    printf("Sum = %d",b);
    return 0;
}
