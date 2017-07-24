#include<stdio.h>
int main()
{
	int num;
	scanf("%d",&num);
	int no_of_bits=sizeof(int)*8;
	for(int k=0;k<no_of_bits;k++)
	{
		if(num<<k|num>>(no_of_bits-k))
		printf("%d",num);
		
	}
}
