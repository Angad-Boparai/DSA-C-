# Fibonacci Sequence Brute Force


int fibonacci(int n){
	if(n<=1){
		return n;
	}
	
	int a = fibonacci(n-1);
	int b= fibonacci(n-2);
	
	return a+b;
}
