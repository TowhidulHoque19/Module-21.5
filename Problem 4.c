#include<stdio.h>

void even(int x)
{
    int i;
    for(i=1;i<=x;i++)
    {
        if(i%2==0)
            printf("%d ",i);
    }
}
int main()
{
    int n,i;
    scanf("%d",&n);
    even(n);
    return 0;
}
