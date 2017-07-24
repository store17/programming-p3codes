//non-overlapping interval
#include<stdio.h>
int main()
{
	int a[100],b[100],n,i,j,x,y;
	int q,p2,p3,p=0,a1=0,t=0,s=0;
	printf("how many interval want to insert:-");
	scanf("%d",&n);
	printf("Enter first cordinate of interval:-\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("Enter second cordinate of interval:-\n");
	for(i=0;i<n;i++)
	scanf("%d",&b[i]);
	printf("Enter new interval:-");
	scanf("%d\t%d",&x,&y);
	for(i=0;i<n;i++)
	{
		if(x>a[i]&&y<b[i])
		 {
			 p=1;
			 break;
		 }
		 
		if(x>b[i]&&x<a[i+1])
		{
			s=1;
			p3=i;
		}
		
		 if(x>a[i]&&x<b[i])
		 {
			 t=1;
			 q=i;
			 for(j=i;j<n;j++)
			 {
				 if(y>b[j] && y<a[j+1])
				 {
					 a1=1;
					 break;
				 }
				 if(y>a[j] && y<b[j])
				 {
					 p2=j;
					 break;
				 }
			 }
		 }
		 if(t==1)
		 break;
	}
	if(p==1)
	{
	   for(i=0;i<n;i++)
	   printf("(%d,%d)",a[i],b[i]);	
	}
	if(t==1)
	{
		for(i=0;i<n;i++)
		{
			if(q==i)
			{
				if(a1==1)
				{
				   printf("(%d,%d)",a[i],y);
				   continue;
				}
				printf("(%d,%d)",a[i],b[p2]);
				i=p2;
				
			}
			else
			printf("(%d,%d)",a[i],b[i]);
		}
		
	}
	if(s==1)
	{
		for(i=0;i<n;i++)
		{
			
			printf("(%d,%d)",a[i],b[i]);
			if(p3==i)
			printf("(%d,%d)",x,y);
			
		}
	}
	return 0;
	
	
}
