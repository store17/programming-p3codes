//booking room  (consider arrival time is sorted)
#include<stdio.h>

int main()
{
	int a[11]={0,1,2,3,3,5,5,6,8,8,12};
	int d[11]={6,4,13,5,5,7,9,10,12,14};
	int i,j,k,q=1;
	printf("enter number of room in hotel:-");
	scanf("%d",&k);
	int p=0,b[k];
	for(i=0;i<k;i++)
	b[i]=-1;
	for(i=0;i<11;i++)
	{
		for(j=0;j<k;j++)
		{
			if(b[j]<=a[i]||b[j]==-1)
			{
			  b[j]=d[i];
			  p++;
			  break;
		    }
			  
		}
		if(p==i)
		{
			q=0;
		printf("false");
		break;
	    }
	}
	if(q==1)
	printf("true");
	
	
} 
