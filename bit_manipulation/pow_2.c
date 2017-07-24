//number a power of 2
#include<stdio.h>
int main()
{
	int x,count=0;
	scanf("%d",&x);
	int no_of_bits=sizeof(int)*8;
	for(int k=0;k<no_of_bits;k++)
	{
		if(x&1<<k)
		count++;
	}
	if(count==1)
	printf("true");
	else
    printf("false");
}
