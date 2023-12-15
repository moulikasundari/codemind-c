#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int m,f=1;
    scanf("%d",&m);
    for(i=0;i<n;i++)
    {
        if(m==arr[i])
        {
            f=0;
            break;
            
        }
        
    }
    if(f==0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    
}