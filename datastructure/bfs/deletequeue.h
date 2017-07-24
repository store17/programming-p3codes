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
