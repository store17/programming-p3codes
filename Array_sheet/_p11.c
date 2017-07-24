//array of digit
#include<stdio.h>
int main(){
int n,p,q,i;
printf("Enter the positive number:-");
scanf("%d",&n);
p=n;
int a[15];
q=14;
while(p!=0)
{
	a[q]=p%10;
	p=p/10;
	q--;
}
a[14]=a[14]+1;
if(a[14]<10)
{
	for(i=q+1;i<101;i++)
	printf("%d",a[i]);
}
else
{
	i=14;
	while(a[i]==10)
	{
		a[i]=0;
		a[i-1]=a[i-1]+1;
		i--;
	}
	if(i==q)
	{
		p=q;
		a[p]=1;
	}
	  else
	  p=q+1;
	for(i=p;i<15;i++)
	printf("%d",a[i]);
}
return 0;
}
