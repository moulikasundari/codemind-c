#include<stdio.h>
int main()
{
    int n,r,c=0,b=0;
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        n=n/10;
        if(r%2==0)
        {
            c+=1;
        }
        else
        {
            b+=1;
        }
    }
    if(c!=0&&b==0)
    {
        printf("Even");
    }
    else if(c==0&&b!=0)
    {
        printf("Odd");
    }
    else
    {
        printf("Mixed");
    }
}