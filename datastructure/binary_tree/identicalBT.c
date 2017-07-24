//identical binary trees
//create binary tree
#include<stdio.h>
#include<stdlib.h>
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


int identiBT(btree *root1,btree *root2)
{
   if(root1==NULL && root2==NULL)
   return 1;
   if(root1!=NULL && root2!=NULL)
   {
	   if(root1->value==root2->value)
	   {
		   return (identiBT(root1->lchild,root2->lchild) && identiBT(root1->rchild,root2->rchild));
	   }
	   return 0;
   }
   return 0;
}

int main()
{
	btree *root1=NULL,*root2=NULL;
	int n1,n2,p;
	printf("Enter the number of nodes want to insert into first btree:-");
	scanf("%d",&n1);
	int val1,val2,val3;
	
	for(int i=1;i<=n1;i++)
	{
		printf("Enter node in btree -");
		scanf("%d %d %d",&val1,&val2,&val3);
		insertbtree(&root1,val1,val2,val3);
	}
	
	printf("Enter the number of nodes want to insert into second btree:-");
	scanf("%d",&n2);
	
	
	for(int i=1;i<=n2;i++)
	{
		printf("Enter node in btree -");
		scanf("%d %d %d",&val1,&val2,&val3);
		insertbtree(&root2,val1,val2,val3);
	}
	print(root1);
	printf("\n");
	print(root2);
	
	p=identiBT(root1,root2);
	if(p==1)
	printf("Binary trees are identical\n ");
	else
	printf("Binary trees are not identicals\n");
}

