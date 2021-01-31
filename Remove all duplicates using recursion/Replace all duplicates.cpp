#include <bits/stdc++.h>
using namespace std;

void fun(char* input){
    
    if(input[0]=='\0'){
        return;
    }
    
    int i=1;
    for(;input[i]!='\0';i++){
        if(input[0]==input[i]){
            
            int j=i+1;
            for(;input[j]!='\0';j++){
                
                input[j-1]=input[j];
                
            }
            
            input[j-1]=input[j];
        }
    
    
    
    
    }

    fun(input+1);
}

int main(){
    
    char s[10000]="aacaxx";
    fun(s);
    cout<<s;
}
