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
    int a,b;
    scanf("%d%d",&a,&b);
    for(i=0;i<n;i++)
    {
        if(arr[i]<a||arr[i]>b)
          {  sum+=arr[i];
        }

    }
    printf("%d",sum);
}