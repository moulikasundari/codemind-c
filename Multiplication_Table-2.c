#include<stdio.h>
int main()
{
    int i,n,m;
    scanf("%d%d",&n,&m);
    for(i=1;i<=m;i++)
    {
        printf("%d x %d = %d
",n,i,n*i);
    }
}