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
