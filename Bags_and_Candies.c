#include<stdio.h>
int main()
{
    int n,k,m;
    scanf("%d%d%d",&n,&k,&m);
    int l=k*m;
    int o=n/l;
    if(n%l==0)
    {
        printf("%d",o);
    }
    else
    {
        printf("%d",o+1);
    }
    
    
}