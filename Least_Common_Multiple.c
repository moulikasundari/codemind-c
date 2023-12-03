#include<stdio.h>
int main()
{
    int a,b,m,i;
    scanf("%d%d",&a,&b);
    for(i=1;i<=b;i++)
    {
        m=i*a;
        if(m%b==0)
        {
            printf("%d",m);
            break;
        }
    }
}