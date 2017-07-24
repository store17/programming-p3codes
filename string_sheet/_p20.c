//format the text
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char *array[100];
	char word[100];
	int n,i,d,sum=0,max=0;
	printf("enter number of word:-");
	scanf("%d",&n);
	printf("Enter words:-");
	for(i=0;i<n;i++)
	{
		scanf("%s",word);
		d=strlen(word);
		array[i]=(char*)malloc(sizeof(char)*(d+1));
		strcpy(array[i],word);
		if(d>max)
		max=d+1;
		sum=sum+d+1+1;
		
	}
	for(i=0;i<n;i++)
	printf("%s",array[i]);
	
	printf("%d %d",sum,max);
	 int l,n1,m,x,y,k,j,s;
	printf("Enter the length of one line:-");
	scanf("%d",&l);
	if(sum%l==0)
	n1=sum/l;
	else
	n1=sum/l+1;
	char a[n1][l];
	m=0;
	i=0;
	for(y=0;y<n1;y++)
	{
		sum=0;
		j=i;
		while(sum<l-2)
		{
			if(i<n){
			sum=sum+strlen(array[i])+1;
			}
			if(sum>l-2)
			break;
			if(i>=n)
			break;
			i++;
		}
		/*int h=i-j-1;
		sum=sum-strlen(array[i])-h+1;
	    int g=(l-sum)/h;*/
		i=i-1;
		
		s=0;
		for(k=j;k<=i;k++)
		{
			x=0;
			while(array[k][x]!='\0')
			{
			a[m][s]=array[k][x];
			x++;s++;
		    }
		  /*  for(int d=0;d<g-1;d++)
		    {*/
		    a[m][s]=' ';
		    s++;
		   // }
		}
		if(s!=l-1)
		while(s!=l-1)
		{
			a[m][s]=' ';
			s++;
		}
		a[m][l-1]='\0';
		
		m++;
		i++;
	}
	
	
	for(i=0;i<n1;i++)
	printf("%s\n",a[i]);
}
