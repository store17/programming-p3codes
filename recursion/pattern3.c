#include<stdio.h>
void print(int n,int odd,int even)
{
    if(n==0)return;
    printf("%d,%d,",odd,even);
    print(n-1,odd*2,even*3);
}
int main()
{
    int n;
    printf("Enter the value of n:-");
    scanf("%d",&n);
    print(n,n,-n);
}
