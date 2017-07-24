
btree* search(btree *root,int val)
{
	if((root)->value==val)
	  return root;
	  
	  if(root==NULL)
	  return;
	  
	  return search(&root->lchild,val);
	  return search(&root->rchild,val);
}

void insertbtree(btree **root,int child,int par,char side)
{
	btree *temp;
	temp=(btree*)malloc(sizeof(btree));
	temp->value=child;
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
	ptr=search(ptr1,par);
	if(side=='L'){
		printf("left node inserted of node %d\n",ptr->value);
	ptr->lchild=temp;}
	else{
		printf("right node inserted %d\n",ptr->value);
	ptr->rchild=temp;}
}



