#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int sum=0;
    for(i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    int avg=sum/n;
    int c=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]<=avg)
        {
            c=c+1;
        }
    }
    printf("%d",c);
    
    
}