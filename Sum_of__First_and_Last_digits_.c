#include<stdio.h>
int main()
{
    int a=0,b=0,n,sum=0;
    scanf("%d",&n);
    b=n%10;
    while(n>10)
    {
        n=n/10;
        a=n;
        sum=a+b;
    }
    printf("%d",sum);
}