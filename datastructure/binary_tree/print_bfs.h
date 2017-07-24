
void print_bfs_tree(nd **front,nd **temp2)
{
	static int w=0;
	w++;
	if(w==1)
	printf("New bfs tree of all nodes:-\n");
	if(*front==NULL)
	return;
	printf("%d- ",(*front)->value);
	while((*temp2)->next!=NULL)
	{        
		  
		*temp2=(*temp2)->next;
		 
		 printf("%d ",(*temp2)->value);
	}
	
	printf("\n");
	
}
