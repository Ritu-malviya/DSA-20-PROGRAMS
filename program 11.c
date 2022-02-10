#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *link;
};
struct node* front;
struct node* rear;
void Enqueue(){
	struct node* newnode;
	newnode = (struct node*)malloc(sizeof(struct node));
	if(newnode == NULL){
		printf("Overflow\n");
	}else{
		int item;
		printf("Enter data : ");
		scanf("%d",&item);
		newnode->data = item;
		if(front == NULL){
			front = newnode;
			rear = newnode;
			front->link = NULL;
			rear->link = NULL;
		}else{
			rear->link = newnode;
			rear = newnode;
			rear->link = NULL;
		}
	}
}
void Dequeue(){
	struct node *ptr;
	if(front == NULL){
		printf("Underflow\n");
	}else{
		ptr = front;
		front = front->link;
		free(ptr);
	}
}
void show(){
	struct node* ptr;
	ptr = front;
	if(front == NULL){
		printf("Empty Queue");
	}else{
		while(ptr!=0){
			printf("%d\n",ptr->data);
			ptr = ptr->link;
		}
	}
}
int main(){
	int choice = 0;
	printf("----------------OPERATIONS IN QUEUE------------------\n");
	printf("Enter 1 for push(insertion)\n");
	printf("Enter 2 for pop(insertion)\n");
	printf("Enter 3 for traversing(display)\n");
	printf("Enter 4 for exit\n");
	while(choice!=7){
		printf("Enter your choice : ");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				Enqueue();
				printf("Insert data successfully\n");	
				break;
			
			case 2:
				Dequeue();
				printf("Delete data successfully\n");
				break;
			
			case 3:
				show();
				break;
			
			case 4:
				exit(0);
				break;
			
			default:
				printf("Invalid choice\n");
				break;
				
		}
		
	}
}
