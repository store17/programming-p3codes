// ^ shape
#include<stdio.h>

int main(){
  int i,j,k,n,p;
  printf("Enter number of rows in pattern\n");
  scanf("%d",&n);
  p=0;
  for(i=0;i<n;i++)
  {
	  for(j=0;j<n-i;j++)
	  printf("%c",'A'+j);
	  
	  for(k=j;k<n+i-1;k++)
	  printf(" ");
	  
	  for(j=n-i-1;j>=0;j--)
	  if(p==0){p++;}
	  else
	  printf("%c",'A'+j);
	  
	  printf("\n");
  }
  
  return 0;

}
