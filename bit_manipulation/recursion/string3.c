#include<stdio.h>
#define MAX 20
char str[MAX];
void generatestring(int k,char str[],int n)
{
   if(n==k)
   {
       printf("%s ",str);
       return;
   }
   str[n]='0';
   generatestring(k,str,n+1);
   str[n]='1';
   generatestring(k,str,n+1);
}
int main()
{
    int k,i;
    printf("Enter size of binary:-");
    scanf("%d",&k);
    for(i=1;i<=k;i++)
    {
    str[i]='\0';
    generatestring(i,str,0);
    }

}
