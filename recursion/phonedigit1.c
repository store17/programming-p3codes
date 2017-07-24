#include<stdio.h>
#include<string.h>
char phone[10][5]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
void generateString(int num[],int size,char output[],int curr_digit)
{
	int k,counter=0;
	if(curr_digit==size)
	{
		output[curr_digit]='\0';
		printf("%s  ",output);
		return;
	}
	k=strlen(phone[num[curr_digit]]);
	while(counter<k)
	{
		output[curr_digit]=phone[num[curr_digit]][counter];
		counter++;
		generateString(num,size,output,curr_digit+1);
	}
}
int main()
{
	int num[]={2,5,7};
	int curr_digit=0;
	char output[3];
	int size=sizeof(num)/sizeof(int);
	generateString(num,size,output,curr_digit);
}
