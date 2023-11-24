#include<stdio.h>
int main()
{
    int n,r,t,sum=0;
    scanf("%d",&n);
    int s=n*n;
    t=s;
    while(s!=0)
    {
        r=s%10;
        sum=sum+r;
        s=s/10;
    }
    if(sum==n)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
    

}