// Count number of subsets with given difference


int count_subs(int arr[],int n,int diff){

	int sum=0;
	for(int i=0;i<n;i++){
		sum=sum+arr[i];
	}
	
	bool t[n+1][sum+1];

	int required_value=(sum+diff);
	
	if(required_value%2==1){
		return 0;
	}
	else{
		required_value=required_value/2;
	}
	for(int i=0;i<n+1;i++){
		for(int j=0;j<sum+1;j++){
			
			if(i==0){
				t[i][j]=0;
			}
			
			if(j==0){
				t[i][j]=1;
			}
		}
	}
	
	int answer=count_subsets_with_sum(arr,n,sum);
		
		return answer;
}

	int count_subsets_with_sum(int arr[],int n,int sum){
		
		for(int i=1;i<n+1;i++){
			for(int j=1;j<sum+1;j++){
				if(arr[i-1]<=j){
					t[i][j]=t[i-1][j-arr[i-1]] + t[i-1][j];
				}
				
				else{
					t[i][j]= t[i-1][j];
				}
			}
		}
		return t[n][sum];
	}
