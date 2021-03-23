int LCS(int m,int n,string s1,string s2){

	if(m==0 or n==0){
		return 0;
	}
	
	if(s1[m-1]==s2[n-1]){
		return (1+LCS(m-1,n-1,s1,s2));
	}
	
	else{
		return max(LCS(m-1,n,s1,s2),LCS(m,n-1,s1,s2));
	}
	
	
}
