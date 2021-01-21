#include <iostream>
using namespace std;


struct Pair{
    int max;
    int min;
};

struct Pair getMinMax(int arr[], int n){
    
    struct Pair minmax;
    int i;
    
    if(n%2==0){
        
        if(arr[0]>arr[1]){
            minmax.min=arr[1];
            minmax.max=arr[0];
        }
    
        else{
            minmax.min=arr[0];
            minmax.max=arr[1];
        }
    
        i=2;
    }
    
    else{
        
        minmax.min=arr[0];
        minmax.max=arr[1];
        i=1;
        
    }
  while(i<n-1){
    if(arr[i]>arr[i+1]){
        
        if(arr[i]>minmax.max){
            minmax.max=arr[i];
        }
    
        if(arr[i+1]<minmax.min){
            minmax.min=arr[i+1];
        }
        
    }
    
    if(arr[i]<arr[i+1]){
        
        if(arr[i+1]>minmax.max){
            minmax.max=arr[i+1];
        }
        
        if(arr[i]<minmax.min){
            minmax.min=arr[i];
        }
        
    }
    
    i=i+2;
}

return minmax;
}

int main(){
    
    int ar[]={12,345,96,12322,9,567};
int arr_size = 6; 
     
    Pair minmax = getMinMax(ar, arr_size); 
     
    cout << "nMinimum element is "
        << minmax.min << endl; 
    cout << "nMaximum element is "
        << minmax.max; 
         
    return 0; 
} 


