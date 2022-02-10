#include<stdio.h>
int stack[100],noe,choice = 0,top=-1;
void push(){
	if(top == noe){
		printf("Overflow\n");
	}else{
		int item;
		printf("Enter data : ");
		scanf("%d",&item);
		top = top+1;
		stack[top] = item;
	}
}
void pop(){
	if(top == -1){
		printf("Underflow\n");
	}else{
		top = top-1;
	}
}
void show(){
	if(top == -1){
		printf("Stack is empty\n");
	}else{
		printf("All data is : \n");
		for(int i=top;i>=0;i--){
			printf("%d ",stack[i]);
		}
	}
}
void peek(){
	int find,found = 0,i=0;
	printf("Enter element : ");
	scanf("%d",&find);
//	int found = 0;
	for(i=0;i<noe;i++){
		if(stack[i] == find){
			found = 1;
			break;
		}
	}
	if(found==1){
		printf("\n%d is founded at position %d\n",find,i+1);
	}else{
		printf("%d is not found in this stack\n",find);
	}
}
void isfull(){
	if(top == noe){
		printf("Stack is full\n");
	}else{
		printf("Stack is not null\n");
	}
}
void isnull(){
	if(top == -1){
		printf("Stack is null\n");
	}else{
		printf("Stack is not null\n");
	}
}
int main(){
	printf("Enter how many elements in this stack : ");
	scanf("%d",&noe);
	printf("-------ALL OPERATION IN STACK-------\n");
	printf("Enter 1 for push(insertion)\n");
	printf("Enter 2 for pop(deletion)\n");
	printf("Enter 3 for show(traversing)\n");
	printf("Enter 4 for peek(item found)\n");
	printf("Enter 5 for check the stack is full or not\n");
	printf("Entet 6 for check the stack is null or not\n");
	printf("Enter 7 for exit\n");
	while(choice!=7){
		printf("Enter your choice :");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				push();
				printf("Item insertion successfully complete\n");
				break;
				
			case 2:
				pop();
				printf("Item deletion successfully complete\n");
				break;
				
			case 3:
				show();
				break;
		
			case 4:
				peek();
				break;
				
			case 5:
				isfull();
				break;
			
			case 6:
				isnull();
				break;
				
			case 7:
				exit(0);
				break;
			
			default:
				printf("Invalid choice!!\n");
				break;
		}
	}
}
