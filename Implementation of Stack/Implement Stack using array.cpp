#include <iostream>
using namespace std;


class Stacks{
	
	private:
		int* data;
		int next_index;
		int capacity;
	
	public:
	
	Stacks(int total_size){
		
		data=new int[total_size];
		capacity=total_size;
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
		if(next_index==capacity){
			cout<<"Stack is full";
			return;
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
