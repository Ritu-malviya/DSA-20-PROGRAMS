#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *link;
};
void printdata(struct node* n){
	while(n!=NULL){
		printf("%d\n",n->data);
		n = n->link;
	}
}
int delete_at_end(struct node* first){
	struct node *ptr = first;
	struct node *temp = first->link;
	while(temp->link != NULL){
		ptr = ptr->link;
		temp = temp->link;
	}
	ptr->link = NULL;
	free(temp);
	return first;
}
int main(){
	struct node* first;
	struct node* second;
	struct node* third;
	
	first = (struct node*)malloc(sizeof(struct node));
	second = (struct node*)malloc(sizeof(struct node));
	third = (struct node*)malloc(sizeof(struct node));
	
	first->data = 10;
	first->link = second;
	
	second->data = 20;
	second->link = third;
	
	third->data = 33;
	third->link = NULL;
	
	
	printdata(first);
	

	first = delete_at_end(first);

	printf("After deletion \n");
	printdata(first);
}
