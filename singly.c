#include<stdio.h>
struct node
{
	int info;
	struct  node *next;
};
struct node *head=NULL;
void create();
void display();
void insertatbeg();
void insertatend();
void deleteatbeg();
void deleteatend();
void insertrandom();
void deleterandom();
int main()
{
	int ch;
	while(1)
	{
		printf("1.create 2.display 3.insertatbeg 4.insertatend 5.deleteatbeg 6.deleteatend 7.insertrandom 8.deleterandom 0.exit \n");
		printf("enter your choice: ");
	    scanf("%d",&ch);
	switch(ch)
	{
		case 1: create(head);
		break;
		case 2: display(head);
		break;
		case 3: insertatbeg(head);
		break;
		case 4: insertatend(head);
		break;
		case 5: deleteatbeg(head);
		break;
		case 6: deleteatend(head);
		break;
		case 7: insertrandom(head);
		break;
		case 8: deleterandom(head);
		break;
		case 0: exit(1);
		break;
		default: printf("enter correct info");	
	}
	}
	
	return 0;
}
void create()
{
	struct node *temp,*ptr;
	int data;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("enter info");
	scanf("%d",&data);
	temp->info=data;
	temp->next=NULL;
	if(head==NULL)
	{
		head=temp;
	}
	else
	{
		ptr=head;
		while(ptr->next!=NULL)
		{
			ptr=ptr->next;
		}
		ptr->next=temp;
	}
}
void display(struct node *ptr)
{
	ptr=head;
	printf("linked list is: \n");
	while(ptr!=NULL)
	{
		printf("%d ",ptr->info);
		ptr=ptr->next;
	}
	printf("\n");
}
void insertatbeg(struct node *ptr)
{
	struct node *temp;
	int data;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("enter the element: ");
	scanf("%d",&data);
	temp->info=data;
	temp->next=NULL;
	temp->next=ptr;
	head=temp;
	printf("node inserted successfully...\n");
}
void insertatend(struct node *ptr)
{
	struct node *temp;
	int data;
	temp=(struct node *)malloc(sizeof(struct node));
	printf("enter the element: ");
	scanf("%d",&data);
	temp->info=data;
	temp->next=NULL;
	while(ptr->next!=NULL)
	{
		ptr=ptr->next;
	}
	ptr->next=temp;
	printf("node inserted successfully...\n");
}
void deleteatbeg(struct node *ptr)
{
	if(ptr==NULL)
	{
		printf("linked list underflow...\n");
	}
	else
	{
		head=ptr->next;
		free(ptr);
		printf("node deleted successfully...\n");
	}
}
void deleteatend(struct node *ptr)
{
	struct node *preptr;
	if(ptr==NULL)
	{
		printf("linked list underflow...\n");
	}
	else if(ptr->next==NULL)
	{
		head=NULL;
	    free(ptr);
    }
	else
	{
		while(ptr->next!=NULL)
		{
			preptr=ptr;
			ptr=ptr->next;
		}
		preptr->next=NULL;
		free(ptr);
		printf("node deleted successfully...\n");
	}
}
void insertrandom(struct node *ptr)
{
	struct node *temp;
	int data;
	printf("enter the element: ");
	scanf("%d",&data);
	temp->info=data;
	temp->next=NULL;
	int loc;
	printf("enter the location: ");
	scanf("%d",&loc);
	int i=1;
	while(i<loc-1)
	{
		ptr=ptr->next;
		i++;
	}
	temp->next=ptr->next;
	ptr->next=temp;
}
void deleterandom(struct node *ptr)
{
	struct node *preptr;
	int loc;
	printf("enter the location: ");
	scanf("%d",&loc);
	int i=1;
	while(i<loc)
	{
		preptr=ptr;
		ptr=ptr->next;
		i++;
	}
	preptr->next=ptr->next;
	free(ptr);
	printf("node deleted successfully...\n");
}