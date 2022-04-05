#include <stdio.h>

int findTheKeyPair(int arr[] , int n);


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
    findTheKeyPair(arr, n);

    return 0;
}

int findTheKeyPair(int arr[], int n){
	int key , flag =0;	
    printf("Enter the key : ");
    scanf("%d",&key);
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            for(int k=0;k<n;k++){
                int val = ((i != j)&&(j != k));
                if(arr[i]+arr[j]+arr[k]==key && val ){
                    printf("The key is found i = %d and j = %d  and k = %d \n",i,j,k);
                    flag +=1;
                }
            }
        }
    }
    
    
    if(flag == 0)  printf("The key pair is not found.");
	return 0;
}
