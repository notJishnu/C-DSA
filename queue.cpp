#include<stdio.h>
#define max 10
int front=-1,rear=-1,queue[max];
int isempty(){
	if(front==-1 || front>rear){
		return 1;
	}else{
		return 0;
	}
}
int isfull(){
	if(rear==max-1){
		return 1;
	}else{
		return 0;
	}
}
void enqueue(int n){
	if(isfull()){
		printf("overflow");
	}else{
		if(front==-1)
			front=0;
		rear++;
		queue[rear]=n;
	}
}
int dequeue(){
	int data;
	if(!isempty()){
		data=queue[front];
		front++;
		return data;
	}else{
		printf("queue is empty");
		return -1;
	}
}
int display(){
	if(!isempty()){
		return queue[front];
	}else{
		printf("underflow");
		return -1;
	}
}
int main(){
	enqueue(10);
	enqueue(20);
	enqueue(30);
	printf("The deleted element:%d\n ",dequeue());
	printf("the front element:%d\n ",display());
	printf("The queue:");
	for(int i=front;i<=rear;i++){
		printf("%d ",queue[i]);
	}
	return 0;
}
