#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node* next;
};
struct node* createnode(int value){
	struct node* newnode=(struct node*)malloc(sizeof(struct node));
	newnode->next=NULL;
	newnode->data=value;
	return newnode;
}
void insertatposition(struct node** head,int value,int position){
	struct node* newnode=createnode(value);
	if(position==1){
		newnode->next=*head;//insert at beginning
		*head=newnode;
		return;
	}
	struct node* temp=*head;
	int i;
	for (i = 1; i < position - 1 ; i++) {//traverse until the position-1
        temp = temp->next;
    }
    newnode->next = temp->next;//point newnode to next node
    temp->next = newnode;//point previos node to newnode
}
void traverse(struct node *head) {
    struct node *temp = head;

    printf("Linked List: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    struct node* head = NULL;

    insertatposition(&head, 10, 1);
    insertatposition(&head, 20, 2);
    insertatposition(&head, 30, 3);

    traverse(head);

    insertatposition(&head, 25, 3);

    traverse(head);

    return 0;
}

