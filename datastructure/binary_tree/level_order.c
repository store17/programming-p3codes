//printf level order traversal  spiral order
#include<stdio.h>
#include<stdlib.h>
#include"struct.h"
#include"binarytree.h"
#include"insertBT.h"
void printlevel(btree* root,int level)
{
	if(root==NULL)
	 return;
	if(level==1)
	printf("%d ",root->value);
	else
	{
		printlevel(root->lchild,level-1);
		printlevel(root->rchild,level-1);
	}
}

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


void spiralorder(btree *root,int level,int count)
{
	
	if(root==NULL)
	 return;
	if(level==1)
	printf("%d ",root->value);
    if(count==0)
	{
		spiralorder(root->lchild,level-1,count);
		spiralorder(root->rchild,level-1,count);
	}
	if(count==1)
	{
		spiralorder(root->rchild,level-1,count);
		spiralorder(root->lchild,level-1,count);
	}
}

int main()
{
	btree *root1;
	root1=insertBT();
	int level,h,count=0;;
	h=height(root1);
	//printf("Enter the height of tree:-");
	for(level=1;level<=h;level++){
	printlevel(root1,level);
	printf("\n");}
	printf("spiral order:-\n");
	for(level=1;level<=h;level++){
	spiralorder(root1,level,count);
	count=1-count;
	printf("\n");}
}
