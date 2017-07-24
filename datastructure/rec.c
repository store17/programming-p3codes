#include <stdio.h>
#include<stdlib.h>
struct nodel
{
	int value;
	struct nodel *next;
};
typedef struct nodel node;

int middle(node *ptr1,node *ptr2)
{
    if(ptr2->next==NULL || ptr2->next->next==NULL)
    {
		if(ptr2->next==NULL)
		return ptr1->value;
		else
		return ptr1->next->value;
	}
    
    return middle(ptr1->next,ptr2->next->next);
}
void insert(node **hd,int val)
{
	node *temp,*ptr;
	temp=(node*)malloc(sizeof(node));
	temp->value=val;
	temp->next=NULL;
	if(*hd==NULL)
	*hd=temp;
	else
	{
		ptr=*hd;
		while(ptr->next!=NULL)
		ptr=ptr->next;
		ptr->next=temp;
	}
}
int main()
{
	int n1,val,i;
	node *head=NULL;
	scanf("%d",&n1);
	for(i=0;i<n1;i++)
	{
		scanf("%d",&val);
		insert(&head,val);
	}
	printf("%d",middle(head,head));
}
