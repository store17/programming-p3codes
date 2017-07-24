#include<stdio.h>
#define MAX 20
char str[MAX];
void generatestring(int k,char str[],int n)
{
   if(n==-1)
   {
       printf("%s ",str);
       return;
   }
   str[n]='0';
   generatestring(k,str,n-1);
   str[n]='1';
   generatestring(k,str,n-1);
}
int main()
{
    int k;
    printf("Enter size of binary:-");
    scanf("%d",&k);
    int n=k-1;
    str[k]='\0';
    generatestring(k,str,n);
}
