#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d",&a,&b);
    if(a+b>=11)
    {
    c=21-(a+b);
    printf("%d",c);
    }
    else
    {
        printf("-1");
    }
}