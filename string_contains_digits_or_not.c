#include<stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        char str[100];
        scanf("%s",str);
        int j,c=0;
        for(j=0;str[j]!=NULL;j++)
        {
        	if(str[j]>=48 && str[j]<=57)
        	{
        		c++;
	    	}
	    }
        if(c>0)
        {
            printf("Yes
");
        }
        else
        {
            printf("No
");
 }
}
}