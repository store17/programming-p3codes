//create binary tree
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
struct node 
{
	int value;
	struct node *lchild,*rchild;
};
typedef struct node btree;

btree* search(btree *root,int val)
{
	if((root)->value==val)
	  return root;
	  
	  if(root==NULL)
	  return;
	  
	  return search(&root->lchild,val);
	  return search(&root->rchild,val);
}

void insertbtree(btree **root,int val,int nd,int side)
{
	btree *temp;
	temp=(btree*)malloc(sizeof(btree));
	temp->value=val;
	temp->lchild=NULL;
	temp->rchild=NULL;
	if(*root==NULL)
	{
		*root=temp;
		printf("root inserted\n");
		return;
	}
	
	btree *ptr,*ptr1;
	ptr1=*root;
	ptr=search(ptr1,nd);
	if(side==-1){
		printf("left node inserted of node %d\n",ptr->value);
	ptr->lchild=temp;}
	else{
		printf("right node inserted %d\n",ptr->value);
	ptr->rchild=temp;}
}

void print(btree *root)
{
	if(root==NULL)
	return;
	
	print(root->lchild);
	printf("%d ",root->value);
	print(root->rchild);
}
int max(int p,int q)
{
	if(p>q)
	return p;
	return q;
}

int height(btree *root)
{
	if(root==NULL)
	return 0;
	return max(height(root->lchild),height(root->rchild))+1;
}

int main()
{
	btree *root=NULL;
	int n;
	printf("Enter the number of nodes want to insert into btree:-");
	scanf("%d",&n);
	int val1,val2,val3;
	
	for(int i=1;i<=n;i++)
	{
		printf("Enter node in btree -");
		scanf("%d %d %d",&val1,&val2,&val3);
		insertbtree(&root,val1,val2,val3);
	}
	printf("height of binary tree = %d\n",height(root));
	print(root);
}

