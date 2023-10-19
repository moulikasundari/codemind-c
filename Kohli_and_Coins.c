#include<stdio.h>
int main()
{
    int x,n,ans;
    scanf("%d",&x);
    if(x%10==0)
    {
       n=x/10;
       printf("%d",n);
    }
    else if(x%5==0)
    {
        n=x/10;
        ans=n+(x%10)/5;
        printf("%d",ans);
    }
    else
    {
        printf("-1");
    }
}