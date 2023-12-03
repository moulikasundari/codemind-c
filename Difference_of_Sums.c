#include<stdio.h>
int main()
{
    int n,i,sum=0,square,dif,count=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+(i*i);
        count=count+i;
    }
    square=count*count;
    dif=square-sum;
    printf("%d",dif);
}