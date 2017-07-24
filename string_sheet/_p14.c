//insert character into string make a palindrome string 
#include<stdio.h>
#include<string.h>
#define MAX 40
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
	char str[MAX];
	printf("Enter a string");
	gets(str);
	int p,l,d,i=0,num=0;
	l=strlen(str);
	p=l-1;
	while(p>=0)
	{
		d=palindrome(str,i,p);
		if(d==1)
		{
		num=l-p-1;
		break;
		}
		p--;
	}
	printf("%d",num);
	
}
