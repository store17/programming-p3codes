//palindrome
#include<stdio.h>
#include<string.h>
//#define MAX 40
int palindrome(char str[],int i,int l)
{
	if(i<l)
	{
		if(str[i]==str[l])
		return palindrome(str,i+1,l-1);
		else
		return -1;
	}
	if(i==l)
	return 1;
}
int main()
{
	char str[40];
	int p,count=0;
	printf("Enter string:-");
	gets(str);
	int d,i=0;
	while(str[i]!='\0')
	{
		p=i;
		while(str[i]!=' '&&str[i]!='\0')
		   i++;
		   if(p<=i-1)
		   d=palindrome(str,p,i-1);
		   if(d==1)
		   count++;
		   while(str[i]==' ')
		   i++;
		   if(str[i]=='\0')
		   break;
		  
		   
	}
	printf("%d",count);
}

