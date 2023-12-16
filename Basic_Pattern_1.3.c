#include<stdio.h>
int main()
{
    int i,j,r;
    scanf("%d",&r);
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=r;j++)
        {
            printf("%d ",i);
        }
        printf("
");
    }
}