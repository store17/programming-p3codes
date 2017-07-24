//create binary tree
#include<stdio.h>
#include<stdlib.h>
struct node 
{
	int value;
	struct node *lchild,*rchild;
};
typedef struct node btree;
static int p2=0;
btree* search(btree *root,int val)
{
	if((root)->value==val)
	  return root;
	  
	  if(root==NULL)
	  return;
	  
	  return search(&root->lchild,val);
	  return search(&root->rchild,val);
}

void insertbtree(btree **root,int nd1,int val,char side)
{
	
	if(p2==0){
	btree *temp1;
	temp1=(btree*)malloc(sizeof(btree));
	temp1->value=nd1;
	temp1->lchild=NULL;
	temp1->rchild=NULL;
	if(*root==NULL)
	{
		*root=temp1;
	}
   }
  p2++;
	btree *temp;
	temp=(btree*)malloc(sizeof(btree));
	temp->value=val;
	temp->lchild=NULL;
	temp->rchild=NULL;
	
	btree *ptr,*ptr1;
	ptr1=*root;
	

	
	
	
	//ptr=search(ptr1,nd1);
	if(side=='L'){
	ptr->lchild=temp;}
	else{
	ptr->rchild=temp;}
}

void print(btree *root)
{
	if(root==NULL)
	return;
	
	print(root->lchild);
	print(root->rchild);
	printf("%d ",root->value);
}

int main()
{
	//btree *root=NULL;
	int n,n1,i,j;
	scanf("%d",&n1);
	btree *root[n1];
	int p1=0;
	while(p1!=n1)
	{
		root[p1]=NULL;
		p1++;
	}
	int val1,val2;
	char val3;
	for(j=0;j<n1;j++){
		
		scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d %d %c",&val1,&val2,&val3);
		insertbtree(&root[j],val1,val2,val3);
	}
	p2=0;
    }
    for(j=0;j<n1;j++)
    {
	print(root[j]);
	printf("\n");
  }
}
