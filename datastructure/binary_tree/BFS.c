// breadth first search
#include<stdio.h>
#include<stdlib.h>
#include"list.h"
#include"queue.h"
#include"print_bfs.h"
#include"struct.h"

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
