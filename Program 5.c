#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *link;
};
void printdata(struct node* n){
	while(n!=0){
		printf("%d\n",n->data);
		n = n->link;
	}
}
int insert_at_end(struct node* first,int data){
	struct node* newnode = (struct node*)malloc(sizeof(struct node));
	struct node *temp = first;
	while(temp->link !=NULL){
		temp = temp->link;
	}
	temp->link = newnode;
	newnode->link = NULL;
	newnode->data = data;
	return first;
}
int main(){
	struct node* first = (struct node*)malloc(sizeof(struct node));
	struct node* second = (struct node*)malloc(sizeof(struct node));
	struct node* third = (struct node*)malloc(sizeof(struct node));
	
	first->data = 10;
	first->link = second;
	
	second->data = 20;
	second->link = third;
	
	third->data = 30;
	third->link = NULL;
	int newdata;
	printf("Enter new node data : ");
	scanf("%d",&newdata);
	printf("Before insertion all data is \n");
	printdata(first);
	printf("After insertion all data is \n");
	first = insert_at_end(first,newdata);
	printdata(first);
	
}
