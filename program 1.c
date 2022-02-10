#include<stdio.h>
int main(){
	int array[100],num,sum=0;
	float avg;
	printf("How many elements in this array : ");
	scanf("%d",&num);
	printf("Enter %d number's in this array : ",num);
	for(int i=0;i<num;i++){
		scanf("%d",&array[i]);
	}
	for(int i=0;i<num;i++){
		sum = array[i]+sum;
	}
	avg = sum/num;
	printf("The avg of array is %f\n",avg);
return 0;
}
