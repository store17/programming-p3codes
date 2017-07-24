//largest number
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	int n,d,i;
	printf("Enter number of integers:-");
	scanf("%d",&n);
	char *integer[n];
	char name[n];
	printf("Enter positive integer\n");
	for(i=0;i<n;i++)
	 {
		 scanf("%s",name);
		 d=strlen(name)+1;
		 integer[i]=(char*)malloc(sizeof(char)*d)
	 }
	 
}
