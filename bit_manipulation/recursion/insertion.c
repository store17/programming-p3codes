#include<stdio.h>
//#define MAX 100
int arr[10]={8,7,6,5,4,3,2,1};
void sort(int p)
{
    if(p==0)return;
    if(arr[p]<arr[p-1])
    {
        int temp;
        temp=arr[p];
        arr[p]=arr[p-1];
        arr[p-1]=temp;
    }
    sort(p-1);
}
void insertion(int n)
{
    if(n==0) return;
        insertion(n-1);
        sort(n-1);
}
int main()
{
    int i;
   /* printf("Enter value of elements :-");
    scanf("%d",&n);
    printf("Enter the element in the array:-");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);*/
    insertion(8);
    for(i=0;i<8;i++)
        printf("%d",arr[i]);
}
