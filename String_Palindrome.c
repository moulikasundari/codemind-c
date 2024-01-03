#include<stdio.h>
int main()
{
    char s1[20],s2[20];
	scanf("%[^
]s",s1);
	int i;
	for(i=0;s1[i]!=0;i++)
	{
		s2[i]=s1[i];
	}
	int len=0;
	for(i=0;s1[i]!=NULL;i++)
	{
	len++;
	}
	int j=len-1,t;
	i=0;
	while(i<=j)
	{
		t=s1[i];
		s1[i]=s1[j];
		s1[j]=t;
		j--;
		i++;
	}
	
	int len1=0,len2=0;
	for(i=0;s1[i]!=NULL;i++)
	{
		len1=len1+1;
	}
	for(i=0;s2[i]!=NULL;i++)
	{
		len2=len2+1;
	}
	i=0;
	int f=0;
	if(len1!=len2)
	{
		printf("strings are not same");
	}
	else
	{
		while(s1[i]!=NULL&&s2[i]!=NULL)
		{
			if(s1[i]!=s2[i])
			{
				f=1;
				break;
			}
			i++;
		}
	}
	if(f==0)
	{
		printf("Palindrome");
	}
	else
	{
		printf("Not Palindrome");
	}
}