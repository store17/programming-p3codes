//linear time 
#include<stdio.h>
int main()
{
	int n,i,d,p=0;
	printf("Enter number of element:-");
	scanf("%d",&n);
	int a[n],b[n];
	printf("Enter element in array");
	for(i=0;i<n;i++)
	{
	   scanf("%d",&a[i]);
	   b[i]=0;
   }
   
	 for(i=0;i<n;i++)
	 {
		 d=a[i]-1;
		 b[d]++;
	 }
	 for(i=0;i<n;i++)
	 {
	 if(b[i]>1)
	 {

		 printf("%d",i+1);
		 p=1;
		 break;
		 
	 }
     }
     if(p==0)
     printf("%d",-1);
	   
}
