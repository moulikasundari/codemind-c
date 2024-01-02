#include<stdio.h>
int main()
{
    int n,i,j,t;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    i=0;
    j=n-1;
	while(i<=j)
	{
		t=arr[i];
		arr[i]=arr[j];
		arr[j]=t;
		i++;
		j--;
	}
	for(i=0;i<n;i++)
    {
        if(arr[i]%2!=0)
        {
            printf("%d",arr[i]);
            break;
        }
    }
}