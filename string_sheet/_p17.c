//multiplication
#include<stdio.h>
#include<string.h>
#define MAX 40
int main()
{
	char str1[MAX];
	char str2[MAX];
	int p,q,r,p3;
	printf("Enter two number :-");
	scanf("%s",str1);
	scanf("%s",str2);
	int l1,l2;
	l1=strlen(str1);
	l2=strlen(str2);
	q=l2-1,r=l1-1;
	p3=r;
	p=99;
	int p1,p2,d,j;
	int a[100];
	for(int k=0;k<100;k++)
	a[k]=0;
	while(q!=-1)
	{
		j=p;
		p2=str2[q]-'0';
		while(r!=-1)
		{
			p1=str1[r]-'0';
			d=p1*p2;
			a[j]=a[j]+d;
			if(a[j]>=10)
			{
				a[j-1]=a[j-1]+a[j]/10;
				a[j]=a[j]%10;
			}
            j--;
            r--;
			
		    
		}
		r=p3;
		q--;
		p--;
	}
	int i=0;
	while(a[i]==0)
	i++;if(i==100)
	printf("%d",a[99]);
	else
	for(;i<100;i++)
	printf("%d",a[i]);
}
