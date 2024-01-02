#include<stdio.h>
int main()
{
    int n,c=0,sum=0;
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
        if(arr[i]>=avg)
        {
            c=c+1;
        }
    }
    printf("%d",c);
    
    
}