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
int insert_at_index(struct node* first,int data,int index){
	struct node* newnode = (struct node*)malloc(sizeof(struct node));
	struct node *temp = first;
	int i=0;
	while(i!=index-1){
		newnode = newnode->link;
		i++;
	}
	newnode->link = temp->link;
	temp->link = newnode;
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
		
	printf("Traversing before insertion\n");
	printdata(first);
	printf("Traversing after insetion\n");
	first = insert_at_index(first,200,4);
	printdata(first);
return 0;
}
