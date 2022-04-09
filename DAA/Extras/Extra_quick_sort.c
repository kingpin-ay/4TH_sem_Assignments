#include <stdio.h>



int quicksort(int arr[] , int p , int r){
	
	int partition(int arr[] , int  p , int r){
		int n =  arr[r];
		int i = p-1;
		for(int j=p ; j <= r-1 ; j++ ){
		
			if (arr[j] <= n){
				i = i+1;
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
	
		}

		int temp = arr[i+1];
		arr[i+1] = arr[r];
		arr[r] = temp;
	
		return (i+1);
	}

	if ( p < r ){
		int q = partition( arr , p , r);
		quicksort(arr , p , q-1);
		quicksort(arr , q+1, r);
	}	
	return 0;
}





int main(){
	int n;
	printf("Enter the array size : ");
	scanf("%d", &n);
	int arr[n];


	for(int i = 0; i<n ;i++){
		printf("Enter the %d th element in the array : ", i+1);
		scanf("%d", &arr[i]);
	}

	quicksort( arr, 0 , n-1);
	

	for(int i = 0; i<n ; i++){
		printf("element in the %d th index is :  %d \n", i+1 , arr[i]);
	
	}
	return 0;
}
