// breadth first search
#include<stdio.h>
#include<stdlib.h>

struct node
{
	int value;
	char color;
	struct node *next;
};


struct node1
{
	int value;
	struct node1 *next;
};
typedef struct node1 nd;
nd *rear=NULL;

int main()
{
	int i,n,t,val;
	printf("Enter number of nodes enter in graph:-");
	scanf("%d",&t);
	
	struct node list[t];
	nd *front=NULL;
	
	printf("Enter value of all nodes in graph-");
	for(i=0;i<t;i++){
	scanf("%d",&val);
	list[i].value=val;
	list[i].next=NULL;
	list[i].color='w';}
	
	for(i=0;i<t;i++)
	{
		printf("How many enter near nodes of node %d-",list[i].value);
		scanf("%d",&n);
		for(int j=0;j<n;j++)
		{
          scanf("%d",&val);
          insert_list_node(&list[i],val);
		}
		
	}
	print_list_element(list,t);
	
     	nd *temp2;
     	static int a=0;
	for(i=0;i<t;i++)
	{    a++;
		if(list[i].color=='w'){
		insert_queue_node(&front,list[i].value);
		list[i].color='g';}
		nd *temp1;
		temp1=list[i].next;
		while(temp1!=NULL)
		{
			for(int k=0;k<t;k++)
			{
				if(temp1->value==list[k].value)
				{
					if(list[k].color=='w')
					{
						insert_queue_node(&front,temp1->value);
						list[k].color='g';
					}
				}
			}
			temp1=temp1->next;
		}
		if(a==1)
		temp2=front;
         		
		print_bfs_tree(&front,&temp2);
		
		int p=queue_delete_node(&front);
		if(p==0)
		{
		}
		else
		{
			for(int m=0;m<t;m++)
			{
				if(p==list[m].value)
				list[m].color='b';
			}
		}
	}
	
}


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
