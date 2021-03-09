#include <climits>

int Kadane(int arr[], int n){
	
	int current_sum=0;
	int max_sum=INT_MIN;
	
	for(int i=0;i<n;i++){
		
		current_sum=current_sum+arr[i];
		
		if(current_sum>max_sum){
			max_sum=current_sum;
		}
		
		if(current_sum<0){
			current_sum=0;
		}
	}
	return max_sum;
}
