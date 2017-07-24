
void insert_list_node(struct node *new,int val)
{
	nd *temp;
	temp=(nd*)malloc(sizeof(nd));
	temp->value=val;
	temp->next=NULL;
	if(new->next==NULL)
	{
		new->next=temp;
		return;
	}
	nd *ptr;
	ptr=new->next;
	while(ptr->next!=NULL)
	ptr=ptr->next;
	ptr->next=temp;
} 
