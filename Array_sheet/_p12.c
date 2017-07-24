//sub array of non negative number
#include<stdio.h>
int main()
{
	int n;
	printf("Enter the length of array:-");
	scanf("%d",&n);
	int i,a[n],p,q,sum1,sum2,p1=0,p2=0;
	printf("Enter the element in array");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	
	for(i=0;i<n;i++)
	{
		if(a[i]<0)
		{   p=1;
			q=i;
			break;
		}
		
	}
	if(p==1)
	{
		sum1=0,sum2=0;
		printf("first sub array-[");
		for(i=0;i<q;i++)
		{
			p1++;
			sum1=sum1+a[i];
			printf("%d ",a[i]);
		}
		printf("]\n");
		printf("second sub array-[");
		for(i=q+1;i<n;i++)
		{
			p2++;
			sum2=sum2+a[i];
			printf("%d ",a[i]);
		}
		printf("]\n");
		if(sum1>sum2)
		printf("first sub sum is larger than second array sum");
		if(sum1==sum2)
		{
			if(p1==p2)
			printf("minimum starting index is 0");
			else
			{
				if(p1>p2)
				printf("maximum length segment is =%d",a[q-1]);
				else
				printf("maximum length segment is =%d",a[n-1]);
			}
			
		}
	}
	return 0;
}
