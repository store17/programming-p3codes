// reverse the string word by word
#include<stdio.h>
#include<string.h>
#define MAX 40
int main()
{
	char str1[MAX];
	char str2[MAX];
	printf("Enter string:-");
	gets(str1);
	int l1=strlen(str1)-1;
	int count=0,i=0,j=0,p=1;
	while(l1!=-2)
	{
	  if(str1[l1]==' '|| l1==-1)
	  {
		  if(p==0){
		    for(i=l1+1;i<=l1+count;i++)
		    {
				str2[j]=str1[i];
				j++;
			} 
			str2[j]=' ';
			j++;   
		count=0;
		p=1;}
		else
		p++;
		  
	  }
	  else{
	  count++;
	  p=0;}
	  l1--;
	}
	str2[j]='\0';
	puts(str2);
  
	
}

