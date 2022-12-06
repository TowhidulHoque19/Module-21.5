#include<stdio.h>

int a(int n)
{
     int i=0;
     if(n>=0)
    {
        for(i=n; i>=0; i--)
            printf("%d ",i);
        for(i=-1; i>=-n; i--)
            printf("%d ",i);
    }
    else
    {
        int temp=(-1)*n;
        for(i=temp; i>=0; i--)
            printf("%d ",(-1)*i);
        for(i=-1; i>=-temp; i--)
            printf("%d ",(-1)*i);
    }
}
int main()
{
    int n,i=0;
    scanf("%d",&n);
    a(n);
    return 0;
}
