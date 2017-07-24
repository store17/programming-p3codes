//element in sequence 
#include<stdio.h>
int main()
{
	int n,temp,i,j,l,k,p,q=1;
	printf("Enter number of element:-");
	scanf("%d",&n);
	int a[n],b[n];
	printf("Enter element in array");
	for(i=0;i<n;i++)
	   scanf("%d",&a[i]);
	   
	for(i=0;i<n-1;i++)
	{
		p=0;
		for(j=i;j<n-1;j++)
		{
			if(p==0)
			{
				if(a[j]>=a[j+1]){}
				else
				{
					temp=a[j];
					a[j]=a[j+1];
					a[j+1]=temp;
				}
				p=1;
			}
			else
			{
				
				if(a[j]<=a[j+1]){}
				else
				{
					temp=a[j];
					a[j]=a[j+1];
					a[j+1]=temp;
				}
				p=0;
			}
		}
		if(q>1)
		for(l=0;l<n;l++)
		{  
			if(b[l]==a[l])
			continue;
			else
			if(b[l]>a[l])
			{
			   for(l=0;l<n;l++)
			     {
					 b[l]=a[l];
				 }
				 break;
			 }
			 break;
		}
	  
		else
		{
		for(k=0;k<n;k++)
		   b[k]=a[k];
		   q++;
	   }
		   
		for(j=0;j<n-1;j++)
		{
			if(p==0)
			{
				if(a[j]>=a[j+1]){}
				else
				{
					temp=a[j];
					a[j]=a[j+1];
					a[j+1]=temp;
				}
				p=1;
			}
			else
			{
				
				if(a[j]<=a[j+1]){}
				else
				{
					temp=a[j];
					a[j]=a[j+1];
					a[j+1]=temp;
				}
				p=0;
			}
		}
		for(l=0;l<n;l++)
		{
			if(b[i]==a[i])
			continue;
			else
			if(b[i]<a[i])
			{
			   for(l=0;l<n;l++)
			     {
					 b[l]=a[l];
				 }
				 break;
			 }
			 break;
		}

		
	}
	for(j=0;j<n;j++)
	printf("%d",b[j]);
}
