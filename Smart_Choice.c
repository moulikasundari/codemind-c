#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    int c=x+y;
    int a=(500-(2*x))+(1000-(4*c));
   int  b=(1000-(4*y))+(500-(2*c));
    if(a>b)
    {
        printf("%d",a);
    }
    else
    {
        printf("%d",b);
    }
}