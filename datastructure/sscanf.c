#include<stdio.h>
#include<stdlib.h>
int main()
{
char str[]="This is togus",*tstr=str,temp[100];
int count_read;
while(sscanf(tstr,"%s%n",temp,&count_read)!=EOF)
{
	printf("%s\n",temp);
	tstr=tstr+count_read;
}
}
