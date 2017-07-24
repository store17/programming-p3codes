//modify matrix row and coloum
#include<stdio.h>
int main()
{
	int m,n,p,s,i,j,t,k=0;
	printf("Enter number of row and column:-");
	scanf("%d%d",&m,&n);
	int a[m][n],b[m*n],c[m*n];
	printf("Enter element in matrix");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
			if(a[i][j]==1)
			{
				b[k]=i;
				c[k]=j;
				k++;
			}
			
		}
	}
	for(i=0;i<k;i++)
	{
		t=b[i];
		for(p=0;p<n;p++)
		a[t][p]=1;
		s=c[i];
		for(p=0;p<m;p++)
		a[p][s]=1;
		
	}
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",a[i][j]);
			
		}
		printf("\n");
	}
	
	return 0;
}

