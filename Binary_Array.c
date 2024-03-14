#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int f=1;
    for(i=0;i<n;i++)
    {
        if(a[i]>1)
        {
            f=0;
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