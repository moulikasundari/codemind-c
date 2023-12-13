#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int m=sqrt(n);
    float k=sqrt(n);
    if(m==k)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}