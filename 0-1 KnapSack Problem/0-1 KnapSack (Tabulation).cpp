# Tabulation Approach for 0-1 Knapsack Problem



int [1001][1001];

for(int i=0;i<1001;i++){
	for(int j=0;j<1001;j++){
		if(i==0 or j==0){
			// Base Case Implementation by initialising first column and row with 0
			
			t[i][j] = 0;
			
		}
	}
}

int KnapSack(int val[],int wt[],int n, int W){
	
	for(int i=0;i<n;i++){
		for(int j=0;i<W;j++){
			
			if(wt[i-1]<=j){
				t[i][j]=max(val[i-1] + t[i-1][j-wt[i-1]],t[i-1][j]);
			}
			
			else{
				
			t[i][j]=t[i-1][j];
			
				}
			}		
		}
		
		return t[n][W];
	}
	

