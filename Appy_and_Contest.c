#include<stdio.h>
int main()
{
    int  i,m,j;
    scanf("%d",&m);
    for(i=1;i<=m;i++)
    {
        int n,a,b,k,sum=0,count=0;
        scanf("%d%d%d%d",&n,&a,&b,&k);
        for(j=1;j<=n;j++)
        {
            if(j%a==0&&j%b!=0)
            {
                sum=sum+1;
            }
            else if(j%b==0&&j%a!=0)
            {
                count=count+1;
            }
        }
        if((sum+count)>=k)
        {
            printf("Win
");
        }
        else
        {
            printf("Lose
");
}
}
}
    
