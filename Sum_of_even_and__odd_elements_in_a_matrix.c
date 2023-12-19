#include<stdio.h>
int main()
{
    int r,c,i,j,sum=0,cou=0;
    scanf("%d%d",&r,&c);
    int a[r][c];
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(a[i][j]%2==0)
            {
                sum=sum+a[i][j];
            }
            else
            {
                cou=cou+a[i][j];
            }
        }
    }
    printf("%d %d ",sum,cou);
    
    
}