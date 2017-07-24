#include<stdio.h>
int main()
{
	int num,rev=0;
	scanf("%d",&num);
	int no_of_bits=sizeof(int)*2;
	for(int k=0;k<no_of_bits;k++)
	{
		if(num&1<<k)
		rev=rev|1<<(no_of_bits-k);
		
	}
	printf("%d",rev);
}
