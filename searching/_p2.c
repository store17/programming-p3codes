//search a value in matrix 
#include<stdio.h>
int bsearch(int arr[][4],int lower,int higher,int key)
{
	int mid=lower+(higher-lower)/2;
	if(arr[0][mid]==key) return 1;
	if(higher<lower) return -1;
	if(arr[0][mid]>key) return bsearch(arr,lower,mid-1,key);
	else  return bsearch(arr,mid+1,higher,key);
	
}
int main()
{
	int m,n,key;
	printf("Enter the row and coloum:-");
	scanf("%d%d",&m,&n);
	int i,p,arr[m][n];
	printf("Enter array element");
	for(i=0;i<m;i++)
	  for(int j=0;j<n;j++)
	    scanf("%d",&arr[i][j]);
	printf("Enter key search in array:-");
	scanf("%d",&key);
	p=m*n-1;
	int index=bsearch(arr,0,p,key);
	printf("%d",index);
}

