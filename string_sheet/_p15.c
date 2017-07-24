//binary sum
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int sum(int p,int c)
{
	int *arr;
	arr=(int *)malloc(sizeof(int)*2);
	if((p==0&&c==0)||(p==1&&c==1))
	{
		if(p==0&&c==0)
		{
			p=0;
			c=0;
		}
		else
		{
			p=0;
			c=1;
		}
		
	}
	else
	{
		p=1;
		c=0;
	}
	arr[0]=p;
	arr[1]=c;
	return arr;
}
int main()
{
	char str1[40],str2[40],str3[40];
	int *num,*num1;
	printf("Enter two binary string");
	scanf("%s",str1);
	scanf("%s",str2);
	int l1,l2,j,i=0,c=0;
	l1=strlen(str1)-1;
	l2=strlen(str2)-1;
	while(l1!=-1 || l2!=-1)
	{
		num=sum(str1[l1]-'0',c);
		num1=sum(num[0],str2[l2]-'0');
		if(num[1]>=num1[1])
		c=num[1];
		else
		c=num1[1];
		str3[i]=num1[0]+48;
		i++;
		l1--;
		l2--;
		
	}
	if(c==1)
	{
		str3[i]='1';
		i++;
	}
	i--;
	for(j=0;j<=i;j++)
	printf("%c",str3[i]);
}
