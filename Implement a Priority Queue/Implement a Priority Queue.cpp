#include <vector>

class PriorityQueue{
	
	vector<int> pq;
	
	public:
		
		// Constructor
		
		PriorityQueue(){
		}


		// Checks if queue is empty or not
		
		bool isEmpty(){
			return (pq.size()==0);
		}
	
		// Returns the number of elements in queue
		
		int size(){
			if(isEmpty()){
				return 0;
			}
			
			return pq.size();
		}
		
		// Inserts an element in the queue
		
		void insert(int element){
			
			pq.push_back(element);
			
			// Index of the last element
			int ci=pq.size()-1;
			
			// Index of the parent element
			int pi=(ci-1)/2;
			
			
			// Runs until the inserted element reaches root or its correct position
			while(ci>0){
				
				// If the child is greater than the parent, then swap the values
				if(pq[ci]<pq[pi]){
					
					int temp=pq[ci];
					pq[ci]=pq[pi];
					pq[pi]=temp;
				}
				// Breaks out of the while loop when it reaches the correct position
				else{
					break;
				}
				
				// If the elements have been swapped, changes their index values as well
				ci=pi;
				pi=(ci-1)/2;
		
			}
				
		}
			
		int remove(){
			
			// Storing the first element in a variable
			int ans=pq[0];
			
			// Swapping the first and the last element of the queue
			int temp=pq[0];
			pq[0]=pq[pq.size()-1];
			pq[pq.size()-1]=temp;
			
			// Removing the last element of the queue after swapping
			pq.pop_back();
			
			// Initialising index for parent and the children
			int pi=0;
			int lci=2*pi +1;
			int rci=2*pi +2;
			
			while(lci<pq.size()){
				
				int min_index=pi;
				
				// Swapping index with whichever element is smaller
				if(pq[lci]<pq[pi]){
					min_index=lci;
				}
				
				if(pq[rci]<pq[pi]){
					min_index=rci;
				}
				
				if(min_index==pi){
					break;
				}
			
				// Swapping value of parent index with min_index
				int temp1=pq[min_index];
				pq[min_index]=pq[pi];
				pq[pi]=pq[min_index];
			
			
				pi=min_index;
				lci=2*pi+1;
				rci=2*pi+2;
				
			}
			
		
			// Returning the minimum element
			return ans;
		}
		
			
	};
