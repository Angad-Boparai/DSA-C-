#include <iostream>
#include <queue>
using namespace std;

void print_BFS(int **edges,int n,int sv,int* visited){
    
    queue <int> pendingNodes;
    
   /* bool *visited=new bool[n];
    
    for(int i=0;i<n;i++){
        visited[i]=false;
    }*/
    
    pendingNodes.push(sv);
    visited[sv]=1;
    while(!pendingNodes.empty()){
        
        int temp=pendingNodes.front();
        cout<<temp<<" ";
        pendingNodes.pop();
        visited[temp]=1;
        
        for(int i=0;i<n;i++){
            if(temp==i){
                continue;
            }
            if(edges[temp][i]==1 and !visited[i]){
                pendingNodes.push(i);
                visited[i]=1;
                
                
            }
        }
        
        
    }

	//delete [] visited;
}

void call_BFS(int **edges,int n){
    
    int* visited=new int[n];
    for(int i=0;i<n;i++){
        visited[i]=0;
    }
    
    
    for(int i=0;i<n;i++){
        if(visited[i]==0){
            print_BFS(edges,n,i,visited);
        }
    }
}

int main() {
    // Write your code here
   int n,e;
    cin>>n>>e;
    int **edges = new int*[n];
    for(int i=0;i<n;i++){
        edges[i] = new int[n];
        for(int j=0;j<n;j++)
            edges[i][j] = 0;
    }
    for(int i=0;i<e;i++){
        int f,s;
        cin>>f>>s;
        edges[s][f] =1;
        edges[f][s] =1;
    }
    
  
    
    call_BFS(edges,n);
}


