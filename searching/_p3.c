//starting and ending position of target value
#include<stdio.h>
#include<stdlib.h>
int index[5];
int *position(int arr[],int low,int high,int val)
{	
   int p, mid=low+(high-low)/2;
   if(low>high)
   {
	   index[2]=-1;
   return index;
 }
   else if(arr[mid]==val)
   {
	   p=mid;
	   while(arr[p]==val)
	   p--;
	   index[0]=p+1;
	   while(arr[mid]==val)
	   mid++;
	   index[1]=mid-1;
	   return index;
	   
   }
   else if(arr[mid]>val)
   return position(arr,low,mid-1,val);
   else
   return position(arr,mid+1,high,val);
}
int main()
{
	int n,p,*index1;
	printf("Enter the value of number:-");
	scanf("%d",&n);
	int i,arr[n];
	printf("Enter the number:-");
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	printf("Enter the target value:-");
	scanf("%d",&p);
	index1=position(arr,0,n-1,p);
	if(index[2]==-1)
	printf("%d",index[2]);
	else
	printf("%d %d",index1[0],index1[1]);
	
	
	
	
}
