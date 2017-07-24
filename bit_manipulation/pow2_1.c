//pow of 2-1
#include<stdio.h>
int main()
{
	int num,p,k;
	scanf("%d",&num);
	int no_of_bits=sizeof(int)*8;
	for(k=0;k<no_of_bits;k++)
	{
		p=1<<k;
		if(num==p-1){
		printf("it is pow of 2-1 %d",num);
		break;}
	}
}
