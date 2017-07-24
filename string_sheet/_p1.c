// character count
#include<stdio.h>
#include<string.h>
#define MAX 50

int count(char *str,char c)
{
	int p=0;
	while(*str!='\0')
	{
		if(*str==c)
		p++;
		str++;
	}
	return p;
}
int main()
{
	char str[MAX];
	char c;
	printf("enter string:-");
	gets(str);
    scanf("%c",&c);
	printf("%d",count(str,c));
	return 0;
}
