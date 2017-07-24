// distinct pairs with difference equal to k
#include<stdio.h>
#include<time.h>
int main(){
int k,p,n,m,i,j;
int b[100],c[100],a[100];

printf ("How many element want to insert \n");
scanf ("%d",&n);

printf ("Please enter element in array\n");
for (i=0;i<n;i++)
scanf("%d",&a[i]);

printf ("what is the difference enter value of k=");
scanf("%d",&k);
p=0;
for(i=0;i<n;i++)
{
	for(j=i+1;j<n;j++)
	{
		if(k==a[j]-a[i])
		{
			b[p]=a[i];
			c[p]=a[j];
			p++;
		}
	}
	m=p;
}
p=0;
printf("(%d,%d),",b[0],c[0]);
for(i=1,j=1;i<m,j<m;i++,j++)
{
	p=1;
	for(k=0;k<i;k++)
	{
		if(b[i]==b[k]&&c[i]==c[k])
		{
			p=0;
			break;
		}
	}
	if(p==1)
	printf("(%d,%d),",b[i],c[j]);
}


}
