#include<stdio.h>
int main()
{
    int r;
    scanf("%d",&r);
    int i,j;
    int a[i][j];
    for(i=0;i<r;i++)
    {
        for(j=0;j<r;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<r;j++)
        {
            printf("* ");
        }
        printf("
");
    }
}