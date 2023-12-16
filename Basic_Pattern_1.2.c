#include<stdio.h>
int main()
{
    int r,i,j;
    scanf("%d",&r);
    int a[r][r];
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=r;j++)
        {
            printf("%d ",j);
        }
        printf("
");
    }
}