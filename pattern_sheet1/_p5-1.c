//return anti-diagonals in  matrix
#include<stdio.h>

int main(){
int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
printf("Anti-Diagonals in matrix\n");
int i,j,p;
  for(j=0;j<3;j++)
   {
	   p=j;
	   for(i=0;i<j+1;i++)
	   printf("%d\t",a[i][p--]);
	   
   }
   for(i=1;i<3;i++)
   {
	   p=i;
	   for(j=2;j>=i;j--)
	   printf("%d\t",a[p++][j]);
   }
}
