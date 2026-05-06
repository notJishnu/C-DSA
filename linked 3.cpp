#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node* next;
};
struct node* createnode(int value){
	struct node* newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=value;
	newnode->next=NULL;
	return newnode;
}
void insert(struct node** head,int value,int position){
	struct node* newnode=createnode(value);
	if(position==1){
		newnode->next=*head;
		*head=newnode;
		return;
	}
	struct node* temp=*head;
	int i;
	for(i=0;i<position-1;i++){
		temp=temp->next;
	}
	newnode->next=temp->next;
	temp->next=newnode;
	
}
void traverse(struct node* head){
	struct node* temp=head;
	printf("Linked List:");
	while(temp!=NULL){
		printf("%d -> ",temp->data);
		temp=temp->next;
	}
	printf("NULL");
}
int main(){
	struct node* head=NULL;
	insert(&head,10,1);
	insert(&head,20,2);
	insert(&head,30,3);
	traverse(head);
	insert(&head,25,3);
	traverse(head);
	return 0;
}
