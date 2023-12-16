#include<stdio.h>
int main()
{
    int r;
    scanf("%d",&r);
    int i,j;
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%c ",64+j);
        }
        printf("
");
    }
}