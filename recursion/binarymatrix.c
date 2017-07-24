#include<stdio.h>
#include<string.h>
void count1(int a[][3],int n,int m,int i,int j)
{
    static int count=0;
	if(j==n*m)
	{
		printf("%d",count);
		return;
	}
	if(a[i][j]==1)count++;
	count1(a,n,m,i,j+1);
}
int main()
{
	int a[3][3]={0,1,0,1,1,1,0,1,1};
	count1(a,3,3,0,0);
	return ;
}
