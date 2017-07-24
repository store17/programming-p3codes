#include<stdio.h>
#include<string.h>
void exp(char str[],int size,char output[],int curr,int p)
{

	
	if(curr==(2*size-1))
	{
		output[curr]='\0';
		printf("%s",output);
		return;
	}
	output[curr]=str[p];
	if(curr<2*size-2){
		
		curr++;
		output[curr]='*';
		exp(str,size,output,curr+1,p+1);}
		else
		exp(str,size,output,curr+1,p);
		
	
	
}
int main()
{
	char str[]="abcde";
//	int size=strlen(str);

	char output[10];
	exp(str,5,output,0,0);
}
