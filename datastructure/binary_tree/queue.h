
void insert_queue_node(nd **front,int val)
{
	nd *temp;
	temp=(nd*)malloc(sizeof(nd));
	temp->value=val;
	temp->next=NULL;
	if(*front==NULL)
	{
		*front=temp;
		rear=*front;
		return;
	}
	while(rear->next!=NULL)
	rear=rear->next;
	rear->next=temp;
	rear=temp;
}

int queue_delete_node(nd **front)
{
	if(*front==NULL)
	return 0;
	nd *temp=*front;
	*front=(*front)->next;
	int q=temp->value;
	free(temp);
	return q;
}
