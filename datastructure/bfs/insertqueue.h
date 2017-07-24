void insert_queue_node(nd **front,int val,nd **rear)
{
	nd *temp;
	temp=(nd*)malloc(sizeof(nd));
	temp->value=val;
	temp->next=NULL;
	if(*front==NULL)
	{
		*front=temp;
		*rear=*front;
		return;
	}
	while((*rear)->next!=NULL)
	*rear=(*rear)->next;
	(*rear)->next=temp;
	*rear=temp;
}
