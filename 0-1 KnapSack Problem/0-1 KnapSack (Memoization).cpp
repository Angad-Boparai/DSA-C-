// Memoization Solution for 0-1 KnapSack Problem

int t[1001][1001];

for(int i=0;i<1001;i++){
	for(int j=0;j<1001;j++){
		t[i][j]= -1;
	}
}

int KnapSack(int val[], int wt[], int n, int W){
	
	
	if(t[n][W]!=-1){
		return t[n][W];
	}
	
	
	if(wt[n-1]<=W){
		t[n][W]=max(val[n-1]+KnapSack(val,wt,n-1,W-wt[n-1]),KnapSack(val,wt,n-1,W));
		return t[n][W];
	}
	
	else{
		t[n][W]=KnapSack(val,wt,n-1,W);
			return t[n][W];
	}

	
}
