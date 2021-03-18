// KnapSack Subset Sum Problem


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
