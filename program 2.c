#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *link;
};
void traversing(struct node* n){
	printf("All data is \n");
	//
	while(n!=NULL){
		printf("%d\n",n->data);
		n = n->link;
	}
}
int main(){
	struct node* first = NULL;
	struct node* second = NULL;
	struct node* third = NULL;
	 
	first = (struct node*)malloc(sizeof(struct node));
	second = (struct node*)malloc(sizeof(struct node));
	third = (struct node*)malloc(sizeof(struct node));
	
	first->data = 10;
	first->link = second;
	
	second->data = 20;
	second->link = third;
	
	third->data = 30;
	third->link = NULL;
	
	traversing(first);
return 0;
}a
