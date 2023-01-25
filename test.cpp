#include <stdio.h>

int findIndex(int *arr,int index,int val);

int main(){
	
	int arr[]={2,4,6,8,10};
	int i,index,val;
	
		printf("Original Array: ");
	
	for(i=0;i<5;i++){
		printf("%d ", arr[i]);
	}
	
	printf("\n\nWhich index?\n");
	scanf("%d", &index);
	printf("Value?\n");
	scanf("%d", &val);	
	
	printf("\nBefore function - %d", arr[1]);
	
	findIndex(arr,index,val);
	
	printf("\nAfter function - %d", *(arr+1));
	printf("\nChanged Array: ");
	for(i=0;i<5;i++){
		printf("%d ", arr[i]);
	}
	
	return 0;
}

int findIndex(int *arr,int index,int val){
	
	arr[index] = val;
}
