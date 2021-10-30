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
	
	int n,i;
	printf("Enter size of an array :");
	scanf("%d",&n);
	printf("Enter elements :");
	int arr[n];	
	
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	
	printf("Original Array is :");
	Display(arr,n);
	
	printf("\nReversed Array is :");
	Reverse(arr,0,n-1);
	Display(arr,n);
	
	return 0;
}
