//merge two sorted linkedlist
#include<stdio.h>
#include<stdlib.h>
struct nodel
{
	int value;
	struct nodel *next;
};
typedef struct nodel node;
void cycle(node *head)
{
	node *ptr1,*ptr2;
	ptr1=head;
	ptr2=head->next;
	while(ptr1!=NULL&&ptr2!=NULL)
	{
		if(ptr1==ptr2)
		{
			printf("linkedlist have a cycle\n");
			break;
		}
		ptr1=ptr1->next;
		ptr2=ptr2->next->next;
	}
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

//merge two sort two linkedlist 
void mergesort(node **hd1,node **hd2)
{
	node *ptr1,*ptr2,*ptr3;
	if(*hd1==NULL){
	     print(*hd2);return;}
	int p=0;
	if(*hd2==NULL){
		print(*hd1); return;}
		
	if((*hd2)->value>(*hd1)->value)
	{
		ptr1=*hd1;
		ptr2=(*hd1)->next;
		ptr3=*hd2;
		p=1;
		
	}
	if((*hd1)->value>(*hd2)->value)
	{
		ptr1=*hd2;
		ptr2=(*hd2)->next;
		ptr3=*hd1;
		
	}
	while(ptr2!=NULL && ptr3!=NULL)
	{
		if(ptr2->value>ptr3->value)
		{
			ptr1->next=ptr3;
			ptr3=ptr3->next;
			ptr1=ptr1->next;
			ptr1->next=ptr2;
		}
		else
		{
			ptr1=ptr1->next;
			ptr2=ptr2->next;
		}
	}
	if(ptr2==NULL)
		ptr1->next=ptr3;
		if(p==1)
		print(*hd1);
		else
		print(*hd2);
}

void print(node *hd)
{
	if(hd==NULL)
	printf("Empty linkedlist\n");
	else
	{
		printf("Element in linkedlist:-");
	while(hd->next!=NULL)
	{
		printf("%d  ",hd->value);
		hd=hd->next;
	}
	printf("%d ",hd->value);
    }
}
int main()
{
	node *head1=NULL,*head2=NULL;
	int n1,n2,val;
	printf("Enter insert nodes number:- ");
	scanf("%d",&n1);
	for(int i=0;i<n1;i++)
	{
		printf("Enter insert element:-");
		scanf("%d",&val);
		insert(&head1,val);
	}
     printf("enter  second linklist nodes number:- ");
	scanf("%d",&n2);
	for(int i=0;i<n2;i++)
	{
		printf("Enter insert element in second linklist:-");
		scanf("%d",&val);
		insert(&head2,val);
	}
	//cycle(head1);
	//print(head1);
	//print(head2);
	mergesort(&head1,&head2);
}
