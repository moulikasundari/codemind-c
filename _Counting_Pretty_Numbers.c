#include<stdio.h>
int main()
{
    int i,m,j;
    scanf("%d",&m);
    for(i=1;i<=m;i++)
    {
        int l,r,count=0;
        scanf("%d%d",&l,&r);
        for(j=l;j<=r;j++)
        {
          int n=j%10;
            if(n==2||n==3||n==9)
            {
                count=count+1;
            }
            
        }
        printf("%d
",count);
        
    
    }
    
}