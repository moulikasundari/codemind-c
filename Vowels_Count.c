#include<stdio.h>
int main()
{
    char str[20];
    int i,c=0;
    scanf("%[^n]s",str);
    for(i=0;i<20;i++)
    {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
        {
            c+=1;
        }
    }
    printf("%d",c);
}