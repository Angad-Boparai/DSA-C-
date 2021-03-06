
bool isMaxHeap(int arr[], int n) {
    // Write your code here
    
    if(arr[0]<arr[1]){
        return false;
    }
    
    if(arr[0]<arr[2]){
        return false;
    }
    
    int pi=0;
    int lci=2*pi+1;
    int rci=2*pi+2;
    
    bool lc1;
    
    
    while(lci<n){
        
        
        if(arr[lci]>arr[pi] || arr[rci]>arr[pi]){
            lc1=false;
            return lc1;
        }
        else{
            lc1= true;
        }
    	
        pi=pi+1;
        lci=2*pi+1;
        rci=2*pi+2;
    }
    
    
    return lc1;
    
    
}
