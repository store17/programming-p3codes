
     btree *insertBT()
    {
int n,i;
btree *root=NULL;
	printf("Enter the number of nodes want to insert into btree:-");
	scanf("%d",&n);
	int val1,val2;
	char val3;
	
	for(i=1;i<=n;i++)
	{
		printf("Enter node in btree -");
		scanf("%d %d %c",&val1,&val2,&val3);
		insertbtree(&root,val1,val2,val3);
	}
	return root;
}
