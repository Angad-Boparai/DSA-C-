int printLCS(string a,string b,int m,int n){
	
	int t[m+1][n+1];
	
	for(int i=0;i<m+1;i++){
		for(int j=0;j<n+1;j++){
			if(i==0 or j==0){
				t[i][j]=0;
			}
		}
	}
	
	for(int i=0;i<m+1;i++){
		for(int j=0;j<n+1;j++){
			if(a[i-1]==b[j-1]){
				t[i][j]=1+t[i-1][j-1];
			}
			else{
				t[i][j]=max(t[i-1][j],t[i][j-1]);
			}
		}
	}
	
	int x=m;
	int y=n;
	string ans="";
	
	while(x>0 and y>0){
		
		if(a[x-1]==b[y-1]){
			x--;
			y--;
			ans.push_back(a[x-1]);
		}
		else{
			if(t[i-1][j]>t[i][j-1]){
				i--;
			}
			else{
				j--;
			}
		}
	}
	
	return ans;
	
}
