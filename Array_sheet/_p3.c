// continous subarray with sum
#include<stdio.h>
#include<time.h>

int main(){
	clock_t start,end;
	start=clock();
int n,sum1,sum,i;
printf("Enter number of element in array\n");
scanf("%d",&n);
int a[n+1];
for(i=0;i<n;i++)
scanf("%d",&a[i]);

printf("Enter total sum od subarray\n");
scanf("%d",&sum1);
for(int j=0;j<n;j++)
{
	sum=0;
	for(int k=j;k<n;k++)
	{
		sum=sum+a[k];
		if(sum==sum1)
		{
			printf("sum found between indexes %d and %d",j,k);
			break;
		}
	}
}
end =clock();
printf("Total time taken =%f secs ",(float)(end-start)/CLOCKS_PER_SEC);

}
