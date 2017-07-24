//longest comman prefix
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char *classname[100];
	char name1[100];
	int i,j,n,d,min=200,p=0;
	printf("Enter number of string:-");
	scanf("%d",&n);
   printf("Enter total string:-");
	for(i=0;i<n;i++)
	{
		scanf("%s",name1);
		d=strlen(name1)+1;
		if(min>d)
		min=d;
		classname[i]=(char*)malloc(sizeof(char)*d);
		strcpy(classname[i],name1);
	}
	//printf("%c",classname[0][2]);
	/*for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		printf("%c",classname[i][j]);
	}*/
	for(j=0;j<100;j++)
	{
		for(i=1;i<n;i++)
		{
			if(classname[i-1][j]==classname[i][j])
			{
			continue;
		    }
			else
			{
				p=1;
			break;
		    }
		}
		if(p==1)
		  break;
	   
	}
	for(i=0;i<j;i++)
	{
	printf("%c",classname[0][i]);
}
}
