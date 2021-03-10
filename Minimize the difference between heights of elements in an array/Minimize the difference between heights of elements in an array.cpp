
int min_height(int arr, int k, int n){
	
	sort(arr,arr+n);
	
	
	int result=arr[n-1]-arr[0];
	
	
	for(int i=1;i<n;i++){
		
		if(arr[i]>=k){
			
			int minEle=min(arr[0]+k,arr[i]-k);
			int maxEle=max(arr[n-1]-k,arr[i-1]+k);
			
			result=min(result,maxEle-minEle);
			
		}
		
		else{
		continue;
		}
	}
	return result;
}


