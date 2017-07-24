// find number of pairs
#include<stdio.h>
#include<time.h>

int power(int n1,int n2)
{
	int p=n1;
	while(n2>1)
	{
		p=p*n1;
		n2--;
	}
	return p;
}
int main(){
clock_t start,end;
start = clock();
int x,y,X[10],Y[10];
int i,j,p1,p2;
printf("Enter element in first array\n");
for(i=0;i<6;i++)
scanf("%d",&X[i]);

printf("Enter element in second array\n");
for(i=0;i<6;i++)
scanf("%d",&Y[i]);

printf("Complete pair of x^y>y^x -\n");
for(i=0;i<6;i++)
{
	for(j=0;j<6;j++)
	{
		x=X[i];
		y=Y[j];
		p1=power(x,y);
		p2=power(y,x);
		if(p1>p2)
		printf("(%d,%d),",x,y);
	}
}
end = clock();
printf("Total time taken =%f sec",(float)(end-start)/CLOCKS_PER_SEC);
return 0;
}
