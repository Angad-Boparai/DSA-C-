#include <iostream>
using namespace std;


class Stacks{
	
	private:
		int* data;
		int next_index;
		int capacity=4;
	
	public:
	
	Stacks(){
		
		data=new int[4];
		capacity=4;
		next_index=0;
	}	
	
	int size(){
		return next_index;
	}
	
	bool isEmpty(){
		if(next_index==0){
			return true;
		}
		else{
			return false;
		}
	}
			
	void push(int element){
		if(capacity==next_index){
			Node* newstack=new int[2*capacity];
			for(int i=0;i<capacity;i++){
				newstack[i]=data[i];
			}
		capacity=capacity*2;
		newstack=data;		
		delete [] data;
		}
		data[next_index]=element;
		next_index++;
	}
	
	int pop(){
		next_index--;
		return data[next_index];
	}
	
	int top(){
		
		return data[next_index-1];
	}
};
