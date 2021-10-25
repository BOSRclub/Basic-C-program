//Reversing the linked list
#include<stdio.h>
#include<stdlib.h>
struct Node {
    int data;

    struct Node* next;
};
struct Node* Reverse (struct Node* head);

void reverse(){
    struct Node *current,*prev,*next;
    current = head;
    prev = NULL;
    while(current != NULL)
    {
        current->next = prev;
        prev = curent;
        current = next;
    };
    head = prev;
    return head;
};


int main()
{
    struct Node* head=NULL;  //local variable
    head = Insert(head,2);
    head = Insert(head,4);
    head = Insert(head,6);
    head = Insert(head,8);        next = current->next;

    Print(head);
    head = Reverse(head);
    Print(head);
}


void print()
{
    struct Node *temp = head;
    while (temp != NULL)
    {
        printf("%d\t",temp ->temp);
        temp = temp->next;
    }
    printf("\n");
};
