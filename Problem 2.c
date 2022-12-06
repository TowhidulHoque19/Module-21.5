#include<stdio.h>
int pattern(int x)
{
    int i=0,j=0;
    for(i=x; i>=1; i--)
    {
        for(j=1; j<=x-i; j++)
        {
            printf(" ");
        }
        for(j=1; j<=((2*i)-1); j++)
        {
            printf("*");
        }
        for(j=1; j<=x-i; j++)
        {
            printf(" ");
        }
        printf("\n");
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    pattern(n);
    return 0;
}
