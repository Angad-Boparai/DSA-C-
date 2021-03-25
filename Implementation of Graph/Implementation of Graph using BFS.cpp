#include <bits/stdc++.h>
#include <queue>
using namespace std;

void print_BFS(int **edges,int n,int sv){
	
	int *visited=new int[n];
	
	for(int i=0;i<n;i++){
		visited[i]=0;
	}
	
	cout<<sv<<" ";
	
	queue<int> check
	check.push(sv);
	
	while(!check.empty()){
		int temp=check.front();
		cout<<temp<<" ";
		check.pop();
		visited[temp]=1;
		
		for(int i=0;i<n;i++){
			if(i==temp){
				continue;
			}
			if(visited[i]!=0){
				continue;
			}
			if(edges[temp][i]==1 and visited[i]!=0){
				check.push(i);
				visited[i]=1;
			}
		}	
		
	}
	
	
}

int main()
    {
    int n;
    int e;
    cin>>n>>e;
    
    int **edges=new int*[n];
    
    for(int i=0;i<n;i++){
        edges[i]=new int[n];
        for(int j=0;j<n;j++){
            edges[i][j]=0;
        }
    }
    
    
    for(int i=0;i<e;i++){
        int f;
        int s;
        cin>>f>>s;
        
        edges[f][s]=1;
        edges[s][f]=1;
    }
	
	print_BFS(edges,n,0);
}
