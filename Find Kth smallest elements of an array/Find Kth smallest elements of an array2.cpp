#include <queue>

vector <int> k_Smallest(int *arr,int n, int k){


	priority_queue<int> pq;
	
	// Pushing all the elements into a priority queue
	for(int i=0;i<n;i++){
		pq.push(arr[i]);
	}

	// Remove the top elements when size exceeds k
		while(pq.size()>k){
			pq.pop();
		}
		
	}
	
	int ab[k];
	
	// Pushing the elements of priority queue in an array in reverse order 
	for(int i=0;i<k;i++){
		
		ab[k-i-1]=pq.top();
		pq.pop();
	}
	
	return ab;
}
