#include<stdio.h>
int main()
{
	int num,count,p,a,q,flag=0;
	scanf("%d",&num);
	int no_of_bits=sizeof(int)*8;
	for(int k=0;k<(no_of_bits);k++)
	{
		if(num & 1<<k)
		count=k;
	}
	a=count;
	for(int k=0;k<=(count+1)/2-1;k++)
	{
	      p=num & 1<<k;
		q=num & 1<<a;
		q=q>>(a-k);
		if(p!=q)
		  flag=1;
		  a--;
	}
	if(flag==1)
	printf("num is not palindrome");
	else
	printf("num is palindrome");
}
