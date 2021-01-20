#include <iostream>
using namespace std;


// Function to recursively swap the corresponding first and last element
void reverse(int arr[], int start, int end){
    
    if(start>=end){
        return;
    }
    
    // Swapping the first and last elements
    int temp=arr[start];
    arr[start]=arr[end];
    arr[end]=temp;
    
    // Recursive Call to the function
    reverse(arr,start+1,end-1);
}

// Function to print the elements of the array
void print(int r[],int size){
    
    for(int i=0;i<size;i++){
        cout<<r[i]<<" ";
    }
    cout<<endl;
}

int main(){
    
    int a[]={1,2,3,4,5};
    int n=sizeof(a)/sizeof(a[0]);
    print(a,n);
    reverse(a,0,n-1);
    print(a,n);
    }
