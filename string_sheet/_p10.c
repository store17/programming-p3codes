//roman numeral to integer
#include<stdio.h>
#define MAX 40
int main()
{
char str[MAX];
	printf("Enter string");
	gets(str);
	int i=0,sum=0,p=0;
	while(str[i]!='\0')
	{
		if(str[i]=='V')
		sum=sum+5;
		if(str[i]=='I')
		{
			if(str[i+1]=='X' || str[i+1]=='V')
			sum=sum-1;
			if((str[i+3]=='I' &&str[i]=='I')&&(str[i+1]=='I'&&str[i+2]=='I')){
			printf("enter valid input");p=1;break;}
			if(str[i+1]=='I'||str[i+1]=='\0')
			sum=sum+1;
		}
		if(str[i]=='X')
		sum=sum+10;
		i++;
	}
	if(p==0)
	printf("%d",sum);
}
