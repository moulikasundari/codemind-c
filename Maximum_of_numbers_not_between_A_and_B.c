#include<stdio.h>
int main()
{
    int n,c=0;
    scanf("%d",&n);
    int arr[n];
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int a,b;
    int max=arr[0];
    scanf("%d%d",&a,&b);
    for(i=0;i<n;i++)
    {
        if(arr[i]<a||arr[i]>b)
        {
    c+=1;
    for(i=0;i<n;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
    }
    printf("%d",max);
        }

    }
    if(c==0)
    {
        printf("-1");
    }
}