// Rotate elements of array by 1 in the anti clockwise direction

#include <bits/stdc++.h>
using namespace std;



void rotate_anti(int arr[], int n){
	
	int temp=arr[0];
	
	for(int i=0;i<n-1;i++){
		
		arr[i]=arr[i+1];
	}
	arr[n-1]=temp;
}

int main(){
	
	int arr[]={1,2,3,4};
	rotate_anti(arr,4);
	int i=0;
	while(i<4){
	
	cout<<arr[i];
	i++;
	}
}
