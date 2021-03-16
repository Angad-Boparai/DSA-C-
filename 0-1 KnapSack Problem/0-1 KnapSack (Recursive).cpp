// Recursive Solution for 0-1 KnapSack 


int KnapSack(int val[],int wt[],int n,int W){
	
	if(n==0 or W==0){
		return 0;
	}
	
	if(wt[n-1]<=W){
		return max(val[n-1]+KnapSack(val,wt,n-1,W-wt[n-1]),KnapSack(val,wt,n-1,W));
	}
	
	else{
		return KnapSack(val,wt,n-1,W);
	}
	
}
