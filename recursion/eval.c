#include<stdio.h>
#include<string.h>
int eval(char str[],int size,int i)
{
	if(i==size) return tot;
	return eval(str,size);
}
int main()
{
	char str[]="1-2*3";
	int size=strlen(str);
	eval(str,size,0);
}
