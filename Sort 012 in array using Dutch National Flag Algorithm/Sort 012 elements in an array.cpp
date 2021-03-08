// Sort 012 elements in an array
void sort(int arr, int n){
	
	int low=0;
	int mid=0;
	int high=n-1;
	
	
	while(mid<=high){
		switch(a[mid])
		
			case 0: swap(a[mid],a[low]);
					low++;
					mid++;
					break;
					
			case 1: mid++;
					break;
					
			case 2: swap(a[mid],a[high]);
					high--;
					break;	
	}
} 
