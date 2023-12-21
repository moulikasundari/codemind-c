#include<stdio.h>
int main()
{
    int n,m,i,j;
    scanf("%d%d",&n,&m);
    int a[n][m];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int t,f=0;
    scanf("%d",&t);
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(t==a[i][j])
            {
                f=f+1;
                break;
            }
            
        }
    }
    if(f==1)
    {
        printf("1");
    }
    else
    {
        printf("0");
    }
    
}