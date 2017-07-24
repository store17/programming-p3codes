// printf middle of linked list
#include<stdio.h>
#include<stdlib.h>
struct nodel
{
	int value;
	struct nodel *next;
};
typedef struct nodel node;

//insert element in linked list
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

//middle element in linkedlist
void middle(node *hd)
{
	node *ptr1,*ptr2;
	ptr1=hd;
	ptr2=hd;
	if(hd==NULL)
	{}
	else
	{
		while(ptr2->next!=NULL&&ptr2->next->next!=NULL)
		{
			ptr1=ptr1->next;
			ptr2=(ptr2->next)->next;
		}
		printf("%d",ptr1->value);
	}
}

//reverse the linked list
void reverse(node **hd)
{
	static node *ptr3=NULL;
	node *ptr4=*hd;
	if(*hd==NULL){}
	else{
	while((*hd)->next!=NULL)
	{
		*hd=(*hd)->next;
		ptr4->next=ptr3;
		ptr3=ptr4;
		ptr4=*hd;
	}
	(*hd)->next=ptr3;}
}

//palindrome
void palindrome(node *hd)
{
	node *ptr1,*ptr2;
	if(hd->next==NULL)
	printf("this is palindrome\n");
	else{
	ptr1=hd;
	ptr2=hd;
	int p=0;
	while(ptr2->next!=NULL&&ptr2->next->next!=NULL)
		{
			ptr1=ptr1->next;
			ptr2=(ptr2->next)->next;
		}
	 node *ptr6=NULL;
	node *ptr4=ptr1->next;
	node *hd1=ptr4;
	ptr1->next=NULL;
	
	while(hd1->next!=NULL)
	{
		hd1=hd1->next;
		ptr4->next=ptr6;
		ptr6=ptr4;
		ptr4=hd1;
	}
	hd1->next=ptr6;
	
	while(hd->next!=NULL && hd1->next!=NULL)
	{
		if(hd->value==hd1->value)
		{
			hd=hd->next;
			hd1=hd1->next;
		}
		else
		{
			p=1;
			break;
		}
	}
	if(p==1)
	printf("This linklist is not palindrome\n");
	else
	{
	   if(hd->value==hd1->value) 
	   printf("this is palindrome\n");
	    else
	    printf("this is not palindrome\n");
	  
    }   
		
	}
}

//duplicate remove element in likedlist
void duplicateremove(node *hd)
{
	int temp;
	node *ptr1,*ptr2;
	if(hd->next==NULL)
	printf("No duplicate element in linked list\n");
	else
	{
		ptr1=hd;
		ptr2=hd->next;
		temp=ptr1->value;
		while(ptr2->next!=NULL)
		{
			if(temp==ptr2->value)
			{
				ptr1->next=ptr2->next;
				free(ptr2);
				ptr2=ptr1->next;
			}
			else
			{
				ptr1=ptr1->next;
				ptr2=ptr2->next;
				temp=ptr1->value;
			}
		}
		if(ptr1->value==ptr2->value)
		{
			ptr1->next=ptr2->next;
				free(ptr2);
		}
	}
}

//print the nodes in linkedlist
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
	node *head=NULL;
	int n,val;
	printf("Enter insert nodes number:- ");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		printf("Enter insert element:-");
		scanf("%d",&val);
		insert(&head,val);
	}
	print(head);
	//middle function for find middle element in linkedlist
	//middle(head);
	//reverse the linked list
	//reverse(&head);
	//print(head);
	//palindrome(head);
	duplicateremove(head);
	print(head);
}
