#include <bits/stdc++.h>
using namespace std;


void segregateElements(int [], int );

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		
		segregateElements(a,n);
		
        for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
		cout<<endl;
	}


void seg(int a[], int n){
	
	int j=0;
	int temp[n];
	
	for(int i=0;i<n;i++){
		if(a[i]>0){
			temp[j]=a[i];
			j++;
		}

	}
	
	if (j == n || j == 0) 
        return; 	
	
	for(int i=0;i<n;i++){
		if(a[i]<0){
			temp[j]=a[i];
			j++;
		}
	}
	    memcpy(a, temp, sizeof(temp)); 

}
