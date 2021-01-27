// Rotate elements of array by 1 in clockwise direction

void rotate(int arr[], int n){
	
	// Storing the last elements as it is replaced first and cannot be recovered
	int temp=arr[n-1];
	
	for(int i=n-1;n>0;n++){
		
		arr[i]=arr[i-1];
		
	}
	
	arr[0]=temp;
	
}

