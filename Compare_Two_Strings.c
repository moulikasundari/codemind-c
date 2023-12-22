#include<stdio.h>
#include<string.h>
int main()
{
    char str[20];
    char str1[20];
    scanf("%[^
]s",str);
    scanf("  %[^
]s",str1);
    int res=strcmp(str,str1);
    if(res==0)
    {
    	printf("Strings are Equal");
	}
	else
	{
		printf("Strings are not Equal");
	}
    
}