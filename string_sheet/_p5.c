//interleaving
#include<stdio.h>
#include<string.h>
int main()
{
	char A[10],B[10],C[21];
	int p=0;
	printf("Enter String A:-");
	scanf("%s",A);
	printf("Enter String B:-");
	scanf("%s",B);
	printf("Enter String C:-");
	scanf("%s",C);
	int i=0,j=0,k=0;
	while(C[k]!='\0')
	{
		if((C[k]==A[i]) || (C[k]==B[j]))
		{
			if(C[k]==A[i])
			  i++;
			  else
			  j++;
			  k++;
		}
		else
		{
			p=1;
			printf("C is not interleaving on A and B");
			break;
		}
		
	}
	if(p==0)
	printf("C is interleaving on A and B");
	
}
