#include<stdio.h>
#include<math.h>
int main()
{
    int m,n;
    scanf("%d%d",&m,&n);
    float res=sqrt((m*m)+(n*n));
    printf("%.2f",res);
}