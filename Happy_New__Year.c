#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int h=23-a;
    int m=60-b;
    if(h<1)
    {
        printf("%d",m);
    }
    else
    {
        int e=(60*h)+m;
        printf("%d",e);
        
    }
}