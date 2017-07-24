#include<stdio.h>
void print(int i)
{
    if(i==0)return;
    printf("* ");
    print(i-1);
}
void printpatt(int n)
{
    if(n==0) return;
    print(n);
    printf("\n");
    printpatt(n-1);

}
int main()
{
    int n;
    printf("Enter the number value:-");
    scanf("%d",&n);
    printpatt(n);
}

