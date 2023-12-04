#include<stdio.h>
int main()
{
    int n,i,j,sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int count=0;
        for(j=1;j<=n;j++)
        {
            if(i%j==0)
            {
                count=count+1;
            }
        }
        if(count==9)
        {
            printf("%d ",i);
            sum=sum+1;
        }
    }
    printf("
Total=%d",sum);
}