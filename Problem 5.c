#include<stdio.h>
int main()
{
    char ch;
    int a,b;
    float ans=0;
    getchar();
    scanf("%d %d",&a,&b);
    if(ch=='+')
        ans=a+b;
    else if(ch=='-')
        ans=a-b;
    else if(ch=='*')
        ans=a*b;
    else if(ch=='/')
        ans=a/b;
    return 0;
}
