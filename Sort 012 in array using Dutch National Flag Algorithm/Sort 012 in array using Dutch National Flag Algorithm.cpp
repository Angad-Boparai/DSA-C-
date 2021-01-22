#include <iostream>
using namespace std;


void swap(int* a, int* b){

		int temp=*a;
		*a=*b;
		*b=temp;
}


void sort012(int a[], int n){
	
	// We assign three pointers in the array
	// low and mid point at the start
	// high points to the end
	int low=0;
	int mid=0;
	int high=n-1;
	
	// The loop works until the mid is smaller than the high
	
	while(mid<=high){
		
		// We run three checks here
		
		if(a[mid]==0){
			
			swap(a[mid],a[low]);
			mid++;
			low++;
			
		}
		
		if(a[mid]==1){
			mid++;
		}
	
		if(a[mid]==2){
			
			swap(a[mid],a[high]);
			high--;
		}
	
	}
	
	
}
