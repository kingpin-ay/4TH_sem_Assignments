#include <stdio.h>

int insertionSort(int arr[], int n);

int main(){
	int n;
	printf("Enter the size of the array : ");
	scanf("%d", &n);
	int arr[n];
	
	for(int i = 0 ; i<n ; i++){
		printf("Enter the %d th element : " , i);
		scanf("%d", &arr[i]);
	}
	insertionSort(arr , n);
	
	
	return 0;
}


int insertionSort(int array[], int n){
	
	for(int i = 1; i<n ;i++){
		int j = i-1 ;
		if( array[i] > array[j] ) continue ;
		int current = array[i] ; array[i] = array[j] ; array[j] = current ;
		for(; j >= 1 ; j--){
			if(array[j] > array[j-1]) break;
			array[j] = array[j-1];
			array[j-1] = current ;
		}
	}

	// for printing the array 
	for(int i = 0 ; i<n ; i++){
		printf("%d th element is : %d \n" ,i, array[i]);
	}
	return 0;
}
