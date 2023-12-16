#include<stdio.h>
int main()
{
    int i,n,j;
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        for(j=i;j<=n;j++)
        {
            printf("%c ",i+64);
        }
        printf("
");
    }
}