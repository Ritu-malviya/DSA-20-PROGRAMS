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
int delete_at_begin(struct node* first){
	struct node *temp = first;
	first= first->link;
	free(temp);
	return first;
}
int main(){
	struct node* first;
	struct node* second;
	struct node* third;
	
	first= (struct node*)malloc(sizeof(struct node));
	second = (struct node*)malloc(sizeof(struct node));
	third = (struct node*)malloc(sizeof(struct node));
	
	first->data = 10;
	first->link = second;
	
	second->data = 22;
	second->link = third;
	
	third->data = 32;
	third->link = NULL;
	
	printf("Before deletion all data in linked list is : \n");
	printdata(first);
	
	first = delete_at_begin(first);
	
	printf("After deletion all data in linked list is \n");
	printdata(first);
	
return 0;
}
