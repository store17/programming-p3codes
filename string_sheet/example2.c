#include<stdio.h>
int main()
{

char str[10];
scanf("%s",str);
int i=0,num=0,max=0;
while(str[i]!='\0')
{
if(str[i]!=' ')
num=num*10+str[i]-'0';
else
{
	if(num>max)
max=num;
num=0;
}
i++;
}
printf("%d",max);
}
