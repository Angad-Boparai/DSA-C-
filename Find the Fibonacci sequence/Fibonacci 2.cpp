# Fibonacci Memoization


int fib0_helper(int n,int *ans){
	
	
	if(n<=1){
		return n;
	}

	if(ans[n]!=-1){
		return ans[n];
	}
	
	int a =fibo_helper(n-1,ans);
	int b =fibo_helper(n-2,ans);
	
	ans[n]=a+b;
	
	
	return ans[n];
}


int fibonacci(int n){
	
	int *ans=new int[n+1];
	
	for(int i=0;i<=n;i++){
		ans[i]=-1;
	}
	
	return fibo_helper(n,ans);
}
