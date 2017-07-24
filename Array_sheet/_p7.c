//twice and missing
#include<stdio.h>
#include<math.h>

int main()
{
	int sum1,sum2,A,B,n;
	printf("Enter the length of array-:\n");
	scanf("%d",&n);
	int i,c,x,y,a[n];
	printf("Enter the element in array\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	sum1=0,sum2=0;
	for(i=0;i<n;i++)
	{
		sum1=sum1+a[i];
		sum2=sum2+a[i]*a[i];
	}
	x=((n*(n+1))/2)-sum1;
	y=(((n*(n+1)*(2*n+1))/6)-sum2)/x;
	c=x+y;
	B=c/2;
	A=B-x;
	printf("%d %d",A,B);
	return 0;
}
