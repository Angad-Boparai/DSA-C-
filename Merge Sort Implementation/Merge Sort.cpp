#include <iostream>
using namespace std;

// This function merges two sorted arrays into one sorted array
void merge(int* ar, int x, int y){
    
    int mid=(x+y)/2;
    
    int i=x;
    int j=mid+1;
    int k=x;
    int temp[100];
    while(i<=mid && j<=y){
        
        if(ar[i]<ar[j]){
            
            temp[k]=ar[i];
            i=i+1;
            k=k+1;
        }
        else{
            temp[k]=ar[j];
            j=j+1;
            k=k+1;
        }
    }
    while(i<=mid){
        temp[k]=ar[i];
        i=i+1;
        k=k+1;
    }
    while(j<=y){
        temp[k]=ar[j];
        j=j+1;
        k=k+1;
    }
    // To copy the sorted array output into the original array
    for(int w=x;w<=y;w++){
        ar[w]=temp[w];
    }
    
}

// This function divides the array into two arrays and sorts them
void merge_sort(int a[], int s, int e){
    
    if(s>=e){
        return;
    }
    
    int mid=(s+e)/2;
    
    merge_sort(a,s,mid);
    merge_sort(a,mid+1,e);
    merge(a,s,e);
    
}



int main(){
    
    int arr[]={13,22,1,4};
    merge_sort(arr,0,3);
    
    for(int p=0;p<4;p++){
        cout<<arr[p]<<" ";
    }
}
