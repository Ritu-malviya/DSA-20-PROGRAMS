#include<stdio.h>
void quicksort(int array[],int first,int last){
	int i,j,pivot,temp;
	if(first<last){
		pivot = first;
		i = first;
		j = last;
		while(i<j){
			while(array[i]<=array[pivot] && i<last){
				i++;
				while(array[j]>array[pivot]){
					j--;
				}
				if(i<j){
					temp = array[i];
					array[i] = array[j];
					array[j] = temp;
					
				}
				temp  = array[pivot];
				array[pivot] = array[j];
				array[j] = temp;
				
				quicksort(array,first,j-1);
				quicksort(array,j+1,last);
			}
		}
	}
}
int main(){
	int i,count,array[25];
	printf("Enter how many elements in this array : ");
	scanf("%d",&count);
	printf("Enter %d elements in this array : ",count);
	for(int i=0;i<count;i++){
		scanf("%d",&array[i]);
	}
	printf("Original array : ");
	for(int i=0;i<count;i++){
		printf("%d ",array[i]);
	}
	quicksort(array,0,count-1);
	printf("\nSorted array : ");
	for(int i=0;i<count;i++){
		printf("%d ",array[i]);
	}
}
