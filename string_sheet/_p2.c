//count the number of digit in string
#include<stdio.h>
#include<string.h>
#define MAX 40
int main()
{
	char str[MAX];
	printf("Enter string :-");
	gets(str);
	int i=0,count=0;
	while(str[i]!='\0')
	{
		if((str[i]-'0')>=0 && (str[i]-'0')<=9)
		count++;
		i++;
	}
	printf("%d",count);
}
