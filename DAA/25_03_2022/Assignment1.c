#include <stdio.h>


int searchIndex(int arr[] , int n);


int main()
{
    int n;
    printf("Enter the Size of array of interger : ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("Enter the %d th element of the array : ",i+1);
        scanf("%d",&arr[i]);
    }
    
	searchIndex(arr , n);

    return 0;
}


int searchIndex(int arr[] , int n){
   	
	int findVar,index=0;
   	printf("Searching variable : ");
    scanf("%d",&findVar);
    
	for(int i=0;i<n;i++){
        if(arr[i]==findVar) {  index = i ; } 
    }
    
	if(index != 0) { printf("The higest index that the searching variable is present is at %d index", index);  return index; }
    
	printf("The seaching variable is not present at the array "); 
	return index;
}
