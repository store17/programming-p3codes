//prime factor
#include<stdio.h>
#include<time.h>

int primenumber(int n)
{
   for(int i=2;i*i<=n;i++)
   if(n%i==0)
   return 1;
   return 0;	
}

void primefactor(int n)
{
	int p,i;
	p=primenumber(n);
	if(p==0)
		printf("%d",n);
		
	/*else
	{
		i=2;
		while(n!=1)
		{
			if(n%i==0)
			{
				printf("%d",i);
				n=n/i;
			}
			else
			i++;
		}
	}*/
}

int main(){
	clock_t start,end;
	start=clock();
int n;
printf("Enter a number\n");
scanf("%d",&n);
primefactor(n);
end =clock();
printf("total time taken = %f secs",(float)(end-start)/CLOCKS_PER_SEC);
return 0;
}
