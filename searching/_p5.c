//median of two sorted array
#include<stdio.h>
int median(int arr1[],int arr2[],int m,int n)
{
	int mid1=(0+m-1)/2;
	int mid2=(n-1)/2;
	if(mid1<mid2)
	
}
int main()
{
int n,m,p;
	printf("Enter the first array length:-");
	scanf("%d",&n);
	int i,arr1[n];
	printf("Enter the number:-");
	for(i=0;i<n;i++)
	scanf("%d",&arr1[i]);
	printf("Enter the second array length:-");
	scanf("%d",&m);
	int arr2[n];
	printf("Enter the number:-");
	for(i=0;i<m;i++)
	scanf("%d",&arr2[i]);
	printf("%d",median(arr1,arr2,m,n));
}
