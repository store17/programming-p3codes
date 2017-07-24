// return index of target value
#include<stdio.h>
int bsearch(int arr[],int low,int high,int val)
{
	int mid=low+(high-low)/2;
	if(low>=high&&arr[mid]!=val)
	return mid+1;
	else if(arr[mid]==val)
	return mid;
	else if(arr[mid]<val)
	return bsearch(arr,mid+1,high,val);
	else if(arr[mid]>val)
	return bsearch(arr,low,mid-1,val);
}
int main()
{
	int n,p;
	printf("Enter the value of number:-");
	scanf("%d",&n);
	int i,arr[n];
	printf("Enter the number:-");
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	printf("Enter the target value:-");
	scanf("%d",&p);
	printf("index is :-%d",bsearch(arr,0,n-1,p));
}
