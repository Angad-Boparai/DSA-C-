// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends




//User function template for C++

class Solution{
  public:
    int middle(int A, int B, int C){
        //code here//Position this line where user code will be pasted.
        int a[]={A,B,C};
        int min;
        int max;

        int i;
        if(A>B){
            min=B;
            max=A;
            i=1;
        }
        else{
            min=A;
            max=B;
            i=1;
        }
      
        while(i<2){
            
            if(a[i]>a[i+1]){
                
                if(a[i]>max){
                    max=a[i];
                }
                
                if(a[i+1]<min){
                    min=a[i+1];
                }
            }
            else if(a[i+1]>a[i]){
                
                if(a[i+1]>max){
                    max=a[i+1];
                }
                if(a[i]<min){
                    min=a[i];
                }
                
            }
            i=i+1;
        }
        
        for(int j=0;j<3;j++){
        if(a[j]!=min && a[j]!=max)
        {
            return a[j];
        }
    }
        
    }
};


// { Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int A,B,C;
        cin>>A>>B>>C;
        Solution ob;
        cout<<ob.middle(A,B,C) <<"\n";
    }
    return 0;
}  // } Driver Code Ends
