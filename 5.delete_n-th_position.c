//Deleting the node from the nth position in the linked list.
#include<stdio.h>
#include<malloc.h>
struct node
{
	int data;
	struct node* next;
};
struct node* head;
int insert(int data,int n);
int print();
int deletel(int n);
int main()
{   //The list is already made
	head = NULL; //empty list
	insert(5,1); //5
	insert(4,2); //5 4
	insert(3,3); //5 4 3
	insert(2,2); //5 4 3 2
	int n;
    printf("The list is:\n");
	print();
	printf("\n\nEnter a position to delete\n");
	scanf("%d",&n);
	delete(n);
    printf("\nThe remaining list is :\n");
    print();
	return 0;
}

int insert(int data,int n)
{
	struct node* temp1=(struct node*)malloc(sizeof(struct node));
	temp1->data=data;
	temp1->next = NULL;
	if(n==1)
	{
		temp1->next = head;
		head = temp1;
		return 1;
	}
	struct node* temp2 = head;
	for(int i=0;i<n-2;i++)
	{
		temp2=temp2->next;
	}
	temp1->next=temp2->next;
	temp2->next=temp1;
	}
int delete(int n)
{
	struct node* temp1 = head;
	if (n==1)
	{
		head = temp1->next; //head now point to second node
		free(temp1); //to free the memory occupied by fist node
		return 0;
	}
	for(int i=0;i<n-2;i++)
	{
		temp1=temp1->next; //temp points to (n-1)th node

	}
	struct node* temp2 = temp1->next; //nth node
	temp1->next = temp2->next;
	free(temp2); //delete temp2
	return 0;
}
int print()
{
	struct node* temp = head;
	while(temp!= NULL)
	{
		printf("%d ",temp->data);
		temp = temp->next;
	}

	return 0;
}
