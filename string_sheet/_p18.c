//count and say sequence
#include<stdio.h>
#define MAX 100
int main()
{
	char str[MAX];
	str[0]='1';
	str[1]=',';
	int n,t,i,j,k,p,count;
	char q;
	printf("Enter number of sequence");
	scanf("%d",&n);
	i=0,j=0,k=2;
	for(t=2;t<=n;t++)
	{
		count=0;
		q=str[i];
		count++;
		for(p=i+1;p<=j+1;p++)
		{
			if(q==str[p])
			count++;
			else
			{
				str[k]=count+48; k++; count=1;
				str[k]=q; q=str[p];k++;
			}
		}
		str[k]=','; k++;
		i=p; j=k-2;
		
	}
	str[k]='\0';
	i=0;
	while(str[i]!='\0'){
	printf("%c",str[i]);
	i++;}
	return 0;
}
