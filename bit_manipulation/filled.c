//no of bits to be flipped from A to B
#include<stdio.h>
int main()
{
	int num1,num2,p,q,k,count=0;
	printf("Enter two values:-");
	scanf("%d%d",&num1,&num2);
	int no_of_bits=sizeof(int)*8;
	for(k=0;k<no_of_bits;k++)
	{
		p=num1 & 1<<k;
		q=num2 & 1<<k;
		if(p!=q)
		count++;
	}
	printf("%d",count);
}
