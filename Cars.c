#include<stdio.h>
int main()
{
    int n,a;
    scanf("%d",&n);
    a=n/4;
    if(n%4==0)
    {
        printf("%d",a);
    }
    else
    {
        printf("%d",a+1);
    }
}