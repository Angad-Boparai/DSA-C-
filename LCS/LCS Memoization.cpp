int LCS(int m,int n,string s1,string s2){

	int t[m+1][n+1];
	
	for(int i=0;i<m+1;i++){
		for(int j=0;j<n+1;j++){
			
			t[i][j]=-1;
		}
	}
	
	if(t[m][n]!=-1){
		return t[m][n];
	}
	
	if(s1[m-1]==s2[n-1]){
		t[m][n]=1+LCS(m-1,n-1,s1,s2);
		return t[m][n];
	}
	
	else{
		t[m][n]=max(t[m-1][n],t[m][n-1]);
		return t[m][n];
	}
	
}
