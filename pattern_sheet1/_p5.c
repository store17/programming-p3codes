// spiral order
#include<stdio.h>

int main(){
	int a[5][2]={{1,2},{5,6},{9,10},{3,4},{7,8}};
	int i,j,k,l,p,q,r,t,s;
	printf("Spiral matrix is below here-\n");
	for(i=0;i<1;i++) // this 2 indicate that loop perform 2 time ex-(16*16)= 8 time loop perform and 4*4=2 time perform
	{
		p=i;
		for(k=p;k<2-i;k++)
		printf("%d\t",a[i][k]);
		
		q=k-1;
		for(j=p+1;j<5-i;j++)
		printf("%d\t",a[j][q]);
		
		r=j-1;
		for(l=q-1;l>=i;l--)
		printf("%d\t",a[r][l]);
		
		s=l+1;
		for(t=r-1;t>i;t--)
		printf("%d\t",a[t][s]);
	}
	return 0;
}
