//create a return new string
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char *repeat(char *str,int n)
{
	int j,d=strlen(str);
	char *b;
	b=(char*)malloc(sizeof(char)*(d*n+1));
	if(n==0)
	return b;
	else
	{
		int i=0;
		while(str[i]!='\0')
		{
			for(j=0;j<n;j++)
			b[d*j+i]=str[i];
			i++;
		}
		b[d*n]='\0';
		return b;
	}
}
int main()
{
	char c[]="hello";
	char *d;
	int n;
	printf("Enter number of copies of string");
	scanf("%d",&n);
	d=repeat(c,n);
	puts(d);
	
}
