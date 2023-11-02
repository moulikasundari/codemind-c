#include<stdio.h>
int main()
{
    int i,a,b,sq,cu;
    scanf("%d%d",&a,&b);
    for(i=a+1;i<b;i++)
    {
        printf("%d ",i);
        printf("%d ",i*i);
        printf("%d
",i*i*i);
        
    }
}