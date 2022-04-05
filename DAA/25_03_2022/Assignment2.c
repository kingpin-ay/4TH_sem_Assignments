#include <stdio.h>

int findingTheKeyPair(int arr[] , int n);


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
   
   findingTheKeyPair(arr , n);	
    
    return 0;
}


int findingTheKeyPair(int arr[] , int n){
    int key , checkKey , flag =0;
	printf("Enter the key : ");
    scanf("%d",&key);
        
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
			checkKey = (arr[i]*arr[i]) + (arr[j]*arr[j]);
            if( checkKey == key){
                printf("The key is found i = %d and j = %d \n",i,j);
                flag +=1;
            }
        }
    }
    // checking if there any key pair exists or not 
	if(flag == 0)  { printf("The key pair is not found."); return 0; }
}
