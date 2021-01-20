#include <iostream>
using namespace std;

void reverse(int a[], int size){
    
    int temp=0;
    for(int i=0;i<size/2;i++){
        
        temp=a[i];
        a[i]=a[size-1-i];
        a[size-1-i]=temp;
        
    }
    
    
}


void print(int r[], int size){

	for(int j=0;j<size;j++){
		cout<<r[j]<<" ";
		}
	}


int main(){
    
    int arr[]={1,2,3,4};
    reverse(arr,4);
	print(arr,4);
    return 0;
}
