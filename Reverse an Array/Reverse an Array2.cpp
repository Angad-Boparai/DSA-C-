#include <iostream>
using namespace std;


void reverse(int arr[], int start, int end){
    
    while(start<end){
        
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        
        start++;
        end--;
    }
}

void print(int r[], int size){
    
    for(int i=0;i<size;i++){
        cout<<r[i]<<" ";
    }
    
}

int main(){
    
    int a[]={1,2,3,4,5,6};
    int n=sizeof(a)/sizeof(a[0]);
    reverse(a,0,n-1);
    print(a,n);
}
