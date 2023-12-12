#include<stdio.h>
int rev(int );
int main()
{
    int a,b,i,s;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
       s= rev(i);
       if(i==s)
       {
           printf("%d ",i);
       }
    }
}
    int rev(int n)
    {
        int r,rev=0;
        while(n>0)
        {
            r=n%10;
            rev=rev*10+r;
            n=n/10;
        }
        return rev;
    }
