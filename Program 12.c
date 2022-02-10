#include<stdio.h>
void merge(int arr[],int p,int q,int r){
	int n1 = q-p+1;
	int n2 = r-q;
	int l[n1],m[n1];
	for(int i=0;i<n1;i++){
		l[i] = arr[p+i];
	}
	for(int j=0;j<n2;j++){
		m[j] = arr[q+j+1];
	}
	int i,j,k;
	i = 0;
	j = 0;
	k = p;
	while(i<n1 && j<n1){
		if(l[i]<=m[j]){
			arr[k] = l[i];
			i++;
		}else{
			arr[k] = m[j];
			j++;
		}
		k++;
	}
	while(j<n2){
		arr[k] = m[j];
		j++;
		k++;
	}
}
void mergesort(int arr[],int l,int r){
	if(l<r){
		int m = l+(r-l)/2;
		mergesort(arr,l,m);
		mergesort(arr,m+1,r);
		merge(arr,l,m,r);
	}
}
void printdata(int arr[],int size){
		for(int i=0;i<size;i++){
			printf("%d ",arr[i]);
		}
		printf("\n");
}
int main(){
	int size;
	printf("Enter the size of array : ");
	scanf("%d",&size);
	
	int array[size];
	printf("Enter %d elements in array : ",size);
	for(int i=0;i<size;i++){
		scanf("%d",array[size]);
	}
	printf("original array : ");
	printdata(array,size);
	mergesort(array,0,size-1);
	printf("\n");
	printdata(array,size);
return 0;
}
