//atol to convert a string to an integer
#include<stdio.h>
#define MAX 40
int main()
{
	char str[MAX];
	printf("Enter a string");
	gets(str);
	int num=0,i=0,p=0;
	while(str[i]!='\0')
	{
		if(str[i]==' ')
		break;
		if(str[i]=='.')
		{
		if(num==0)
		num=num*10+8;
		else
		{
		num=num-1;
		num=num*10+8;
	    }
	    i++;continue;
	    }
	    if(str[i]=='-')
	    {
			p=1;
			i++;continue;
		}
		num=num*10+str[i]-'0';
		i++;
		
		
	}
	if(p==1)
	printf("%d",-num);
	else
	printf("%d",num);
}
