// KnapSack Equal Parition Subset Sum


int equalPartition(int arr[], int N){
	
	int sum=0;
	
	for(int i=0;i<N;i++){
		sum=sum+arr[i];
	}
	
	
	if(sum%2!=0){
	   return false;
	}
			
	else{
	    return subset(arr,N,sum/2);
	 }	
			
		
}


int subset_sum(int arr[], int N, int W){
	
	int t[N+1][W+1];
	
	for(int i=0;i<N+1;i++){
		for(int j=0;j<W+1;j++){
			
			if(i==0){
				t[i][j]=0;
			}
			
			if(j==1){
				t[i][j]=1;
			}
		}
	}
	
	
	for(int i=1;i<N+1;i++){
		for(int j=1;j<W+1;j++){
			
		if(arr[i-1]<=j){
			t[i][j]= t[i-1][j-arr[i-1]] or t[i-1][j];
			}
		
		else{
			t[i][j]= t[i-1][j];
			}
		
		}
	}
	
	return t[N][W];
}
