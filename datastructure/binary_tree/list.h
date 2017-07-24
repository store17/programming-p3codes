

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


void print_list_element(struct node list[],int n)
{
  for(int i=0;i<n;i++)
	{
		printf("%d-",list[i].value);
		nd *temp;
		temp=list[i].next;
		while(temp->next!=NULL)
		{
			printf("%d ",temp->value);
			temp=temp->next;
		}
		printf("%d\n",temp->value);
	}	
}
