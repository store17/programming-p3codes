//binary search
#include<stdio.h>
int bsearch(int arr[],int lower,int higher,int key)
{
	int mid=lower+(higher-lower)/2;
	if(arr[mid]==key) return mid;
	if(arr[mid]>key) return bsearch(arr,lower,mid-1,key);
	else  return bsearch(arr,mid+1,higher,key);
	
}
int main()
{
	int n,key;
	printf("Enter element value:-");
	scanf("%d",&n);
	int i,arr[n];
	printf("Enter array element");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	printf("Enter key search in array:-");
	scanf("%d",&key);
	int index=bsearch(arr,0,n-1,key);
	printf("%d",index);
}
