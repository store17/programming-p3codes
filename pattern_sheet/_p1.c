// Floyd's triangle
#include<stdio.h>
int main(){
int n,i,j;
printf("Enter number of rows in triangle\n");
scanf("%d",&n);
static int p=1;

for(i=0;i<n;i++)
 {
	 for(j=0;j<i+1;j++)
	   printf("%d\t",p++);
	   
	 printf("\n");
 }

return 0;
}
