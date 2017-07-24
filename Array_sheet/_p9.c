// 2D grid  minimum step 
#include<stdio.h>

int main()
{
	int p,q,i,p1,p2,p3,p4,count=0;
	int a[3]={0,1,3};
	int b[3]={0,-1,-4};
	
	for(i=0;i<2;i++)
	{
		p1=a[i];
		p2=b[i];
		p3=a[i+1];
		p4=b[i+1];
		if(a[i]<0)
		p1=-a[i];
		if(b[i]<0)
		p2=-b[i];
		
		if(a[i+1]<0)
		p3=-a[i+1];
		
		if(b[i+1]<0)
		p4=-b[i+1];
		
		p=p3-p1;
		q=p4-p2;
		if(p<0)
		p=-p;
		if(q<0)
		q=-q;
		if((p==1&&q==1)||(p==1&&q==0)||(p==0&&q==1))
		{
			count++;
			continue;
		}
		if(p>=1&&q>=1)
		{
			if(p>=q)
			{
				count=count+q;
				p=p-q;
				q=0;
			}
			else
			{
				count=count+p;
				q=q-p;
				p=0;
			}
		}
		if(p!=0)
		{
			count=count+p;
		}
		if(q!=0)
		{
			count=count+q;
		} 
	}
	printf("%d",count);
	
}
