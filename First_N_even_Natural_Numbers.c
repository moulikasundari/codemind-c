#include<stdio.h>
int main()
{
    int i,m,n;
    scanf("%d",&m);
    for(i=m;i>=1;i--)
    {
        n=i*2;
        printf("%d ",n);
    }
}