//last word length
#include<stdio.h>
#define MAX 40
int main()
{
char str[MAX];
	printf("Enter string");
	gets(str);
	int length=0,i=0;
	while(str[i]!='\0')
	{
		if(str[i]==' ')
		length=0;
		else
		length++;
		i++;
	}
	printf("%d",length);
}
