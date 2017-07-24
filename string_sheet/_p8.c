//substring
#include<stdio.h>
#include<string.h>
#define MAX 40
int strStr(char str1[],char str2[])
{
	int j,p,q=0,i=0;
	int l1,l2;
	l1=strlen(str1);
	l2=strlen(str2);
	if(l1==0&&l2==0)
	return -2;
	if(l2==0)
	return -3;
	while(str1[i]!='\0')
	{
		p=i;
		j=0;
		if(str1[i]==str2[j])
		{
			while(str2[j]!='\0')
			{
				if(str1[p]==str2[j])
				{
					p++;
					j++;
				}
				else
				{
					q=1;
				break;
			    }
			}
			if(q==0)
				return i;
		 
		}
		else
		i++;
	}
	return -1;
}
int main()
{
char str1[MAX],str2[MAX];
	printf("Enter string");
	gets(str1);
	printf("Enter sub string");
	gets(str2);
	int d=strStr(str1,str2);
	printf("%d",d);
	
}
