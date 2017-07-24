// pascal triangle
#include<stdio.h>

int fact(int m)
{
	if(m==0) return 1;
	if(m==1) return 1;
	return fact(m-1)*m;
}

int main(){

int i,j,n;
int f1,f2,f3;
printf("Enter number of rows in pascal triangle\n");
scanf("%d",&n);

for(i=0;i<n;i++)
  {
	  for(j=0;j<i+1;j++)
	    {
			f1=fact(i);
			f2=fact(j);
			f3=fact(i-j);
			printf("%d\t",f1/(f2*f3));
		}
		printf("\n");
  }
  
  return 0;

}

