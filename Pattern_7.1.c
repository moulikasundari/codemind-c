#include<stdio.h>
void printpattern(int n)
{
    int i,j;
    for(i=n-1;i>=0;i--)
    {
        for(j=0;j<n-i-1;j++)
        {
            printf(" ");
        }
        for(j=0;j<=i;j++)
        {
            printf("* ");
        }
        printf("
");
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    printpattern(n);
}