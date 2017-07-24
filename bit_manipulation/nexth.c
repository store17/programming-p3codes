//next higher number with same no of set bits
#include<stdio.h>
int main()
{
	int num,k,count=0;
	scanf("%d",&num);
    int count1;
    long max,nextnum;
	int no_of_bits=sizeof(int)*8;
	for(k=0;k<no_of_bits;k++)
	{
		if(num & 1<<k)
		count++;
	}
	max=1<<k-2;
	
	
	for(nextnum=num+1;nextnum<max;nextnum++)
	{
		count1=0;
		for(k=0;k<no_of_bits;k++)
	    {
		if(nextnum & 1<<k)
		count1++;
	    }
	    if(count1==count){
	    printf("next number of %d with same no of bits is:-%ld",num,nextnum);
	    break;}
	}
}
