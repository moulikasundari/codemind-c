#include<stdio.h>
int main()
{
    int i,m,n,sum=0,pro=0,j;
    scanf("%d%d",&m,&n);
    for(i=1;i<m;i++)
    {
        if(m%i==0)
        {
            sum=sum+i;
        }
    }
        for(j=1;j<n;j++)
        {
        if(n%j==0)
        {
            pro=pro+j;
        }
        }

    if(sum==n&&pro==m)
    {
        printf("Amicable");
    }
    else
    {
        printf("Not Amicable");
    }
}