#include<stdio.h>
int main()
{
    int n,b=0,r;
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        if(b<r)
        {
            b=r;
        }
        n=n/10;
    }
    printf("%d",b);
}