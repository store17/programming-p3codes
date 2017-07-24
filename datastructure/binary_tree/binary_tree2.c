#include<stdio.h>
#include<stdlib.h>
#include"struct.h"
#include<math.h>


int max(int p,int q)
{
	if(p>q)
	return p;
	else return q;
} 
int height(btree *root)
{
	if(root==NULL)
	return 0;
	return max(height(root->lchild),height(root->rchild))+1;
}

btree *insertelementlevel(btree **root,int level)
{
	if(level==1)
	{
		if((*root)->lchild==NULL)
		   return *root;
		   if((*root)->rchild==NULL)
		   return *root;
		   
     }
	else
	{
		return insertelementlevel((*root)->lchild,level-1);
		return insertelementlevel((*root)->rchild,level-1);
	}
}

int pow1(int x,int y)
{
	while(y!=1)
	{
		x=x*2;
		y--;
	}
	return x;
}

void insertbtree2(btree **root,int val)
{
	static int cou=0;
	cou++;
	btree *temp;
	temp=(btree*)malloc(sizeof(btree));
	temp->value=val;
	temp->lchild=NULL;
	temp->rchild=NULL;
	if(*root==NULL)
	{
		*root=temp;
		return;
	}
	int h;
	h=height(*root);
	int l=pow1(2,h)-1-cou;
    if(l>0)
	h=h-1;
	btree * ptr,*ptr1;
	ptr=*root;
	ptr1=insertelementlevel(&ptr,h);
	if(ptr1->lchild==NULL)
	ptr1->lchild=temp;
	else
	ptr1->rchild=temp;
	printf("element inserted");
	
	
}
void print(btree *root)
{
	if(root==NULL)
	return;
	
	print(root->lchild);
	printf("%d ",root->value);
	print(root->rchild);
}

int main()
{
	btree *root=NULL;
	int i,n,val;
	printf("Enter number of nodes value :-");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter the insert node value:-");
		scanf("%d",&val);
		insertbtree2(&root,val);
	}
	print(root);
}
