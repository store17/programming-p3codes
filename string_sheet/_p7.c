//rearrange characters
#include<stdio.h>
#include<string.h>
#define MAX 40
int main()
{
char str[MAX];
	printf("Enter string");
	gets(str);
	l=strlen(str);
	char ptr[MAX]={'-1'};
	int i,k,t,count[26]={0};
	i=0;
	while(str[i]!='\0')
	{
	  count[str[i]-'a']++;
	  i++;
    }
    while(str[i]!='\0')
    {
		p=count[str[i]-'a'];
		if(p>1)
		{
			count[str[i]-'a']=0;
			for(i=0;i<l;l++)
			{
				if(a[])
			}
			
		}
	}
}
