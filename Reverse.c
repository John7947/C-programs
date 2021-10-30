#include<stdio.h>

int Reverse(int arr[],int start, int end){
	
	while(start<end){
		int temp;
		temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		start++;
		end--;
	}
}

void Display(int arr[], int size){
	
	int i;
	for(i=0;i<size;i++){
		printf("%d ",arr[i]);
	}
}

int main(){
	
	int n;
	int arr[] = {1,2,3,4,5};
	n = sizeof(arr)/sizeof(int);
	
	printf("Original Array is :");
	Display(arr,n);
	
	printf("\nReversed Array is :");
	Reverse(arr,0,n-1);
	Display(arr,n);
	
	return 0;
}
