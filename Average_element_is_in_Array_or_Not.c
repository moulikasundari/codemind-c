#include<stdio.h>
int main()
{
    int n,f=0,sum=0;
    scanf("%d",&n);
    int arr[n];
    int i;
    for(i=0;i<n;i++)
    {
         scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    int avg=sum/n;
    for(i=0;i<n;i++)
    {
        if(avg==arr[i])
        {
            f=1;
            break;
        }
    }
    if(f==1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    
}