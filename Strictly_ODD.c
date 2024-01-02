#include<stdio.h>
int main()
{
    int n,c=0,dc=0;
    scanf("%d",&n);
    int arr[n];
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
     for(i=0;i<n;i++)
    {
        if(arr[i]%2!=0)
        {
            c+=1;
            if(i%2!=0)
            {
                dc+=1;
            }
        }
    }
    if(c==dc)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}