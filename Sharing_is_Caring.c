#include<stdio.h>
int main()
{
    int n,x;
    scanf("%d%d",&n,&x);
    if(n>=x&&n>=(x*(x+1)/2))
    {
    printf("YES");
    }
    else
    {
        printf("NO");
    }
}