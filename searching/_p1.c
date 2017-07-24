#include<stdio.h>
int squrtf(int n)
{
   if(n==0&&n==1) return 1;
   int lower=1,higher=n,res;
   while(lower<=higher)
   {
	   int mid=(lower+higher)/2;
	   if(mid*mid==n) return mid;
	   if(mid*mid>n)
		   higher=mid-1;
	   else
	   {
		   lower=mid+1;
		   res=mid;
	   }
		   
	  
   }
   return res;
}
int main()
{
	int n,q,i;
	printf("Enter the number of test cases:-");
	scanf("%d",&n);
	printf("Enter the number:-");
	for(i=0;i<n;i++){
		scanf("%d",&q);
	int p=squrtf(q);
	printf("%d\n",p);}
}
