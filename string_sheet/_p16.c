//number of power 2 or not
#include<stdio.h>
int main()
{
	int num,p=1,d,k=0;
	printf("Enter number:-");
	scanf("%d",&num);
	if(num%2==1)
	printf("number is not power of 2");
	else
	{
		num=num/2;
		k++;
		while(num!=1)
		{
			d=num%2;
			if(d==1&&num!=1)
			{
				p=0;
				printf("number is not power of 2");
				break;
			}
			num=num/2;
			k++;
		}
		if(p==1)
		printf("number is power of 2 ^%d",k);
	}
}
