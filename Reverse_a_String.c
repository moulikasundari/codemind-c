#include<stdio.h>
int main()
{
	char str[20];
	char s1[20];
	scanf("%[^
]s",str);
	int i,len=0;
	for(i=0;str[i]!=NULL;i++)
	{
	len++;
	}
	int j=len-1,t;
	i=0;
	while(i<=j)
	{
		t=str[i];
		str[i]=str[j];
		str[j]=t;
		j--;
		i++;
	}
	printf("%s",str);
}