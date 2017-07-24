//encrypted string
#include<stdio.h>
#include<string.h>
#define MAX 50
int main()
{
	char str[MAX];
	printf("Enter string");
	gets(str);
	char ptr[53];
	int i,k,t,count[26]={0};
	i=0;
	while(str[i]!='\0')
	{
	  count[str[i]-'a']++;
	  i++;
    }
	  t=0,i=0;
	 while(str[i]!='\0')
	 {
		 k=count[str[i]-'a'];
		 count[str[i]-'a']=0;
		 if(k==0)
		 {
			 i++;
			 continue;
		 }
		 else
		 {
			 ptr[t]=str[i],t++;
			 ptr[t]=48+k,t++;
			 
		 }
		 
	 }
	 ptr[t]='\0';
	 puts(ptr);
}
