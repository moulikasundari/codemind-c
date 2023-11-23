#include<stdio.h>
int main()
{
    int i,m,n,count=0;
    scanf("%d%d",&m,&n);
    for(i=m;i<=n;i++)
    {
        if(i%3==0)
        {
            count=count+1;
        }
    }
    printf("%d",count);
}