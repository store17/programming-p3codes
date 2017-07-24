//possible permutation
#include<stdio.h>
#include<string.h>
#define MAX 100
void swap(char *x,char *y)
{
	char temp;
	temp=*x;
	*x=*y;
	*y=temp;
}
void permut(char *a,int l,int r)
{
	int i;
	if(l==r)
	  {
		  printf("%s\n",a); return;
	  }
	  for(i=l;i<=r;i++)
	  {
		  swap(a+l,a+i);
		  permut(a,l+1,r);
		  swap(a+i,a+l);
	  }
}
int main()
{
	char str[MAX];
	scanf("%s",str);
	int l=strlen(str);
	permut(str,0,l-1);
}
