#include<stdio.h>
int main()
{
	int num,count,p=0;
	scanf("%d",&num);
	int no_of_bits=sizeof(int)*8;
	for(int k=0;k<(no_of_bits);k++)
	{
		if(num & 1<<k){
			p++;
		count=k;}
	}
	if(p==1)
	printf("%d",1<<count);
	else
	printf("%d",1<<(count+1));
}
