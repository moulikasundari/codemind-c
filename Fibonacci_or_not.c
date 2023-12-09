#include<stdio.h>
int main()
{
	int a=0,b=1,n,c,i,flag=0;
	scanf("%d",&n);
	for(i=2;i<=n;i++)
	{
		c=a+b;
		if(c==n)
		{
			flag=1;
			break;
		}
		a=b;
		b=c;
	}
	if(flag==1)
	{
		printf("True");
	}
	else
	{
		printf("False");
	}
}