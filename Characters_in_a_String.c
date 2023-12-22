#include<stdio.h>
#include<string.h>
int main()
{
	char str[20];
	scanf("%[^
]s",str);
	int length=strlen(str);
	printf("%d",length);
	
}