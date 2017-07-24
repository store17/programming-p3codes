//design a function 
#include<stdio.h>

int function(int a[],int l)
{
	int i,p,q;
	p=1;
   for(i=0;i<l;i++)
   {
	   if(a[i]==1&&p==1)
	   {
		   p=0;
		   q=i;
	   }
	   if(a[i]!=0&&a[i]!=1)
	   return -2;
	   
   }
   if(p==1)
   return -1;
   if(p==0)
   return q;
}

int main(){
int n,i;
int a[100];
printf ("How many element want to insert \n");
scanf ("%d",&n);

printf ("Please enter element in array\n");
for (i=0;i<n;i++)
scanf("%d",&a[i]);

int p=function(a,n);
printf("%d",p);
return 0;
}
