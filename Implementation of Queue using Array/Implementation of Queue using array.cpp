#include <iostream>
using namespace std;

class Queue{
    private:
    T* data;
    int next_index;
    int first_index;
    int size;
    int capacity;
    
    public:
    
    Queue(int s){
        data=new T[s];
        next_index=0;
        first_index=-1;
        size=0;
        capacity=s;
    }
    
    int get_size(){
        return size;
    }
    
    bool isEmpty(){
        if(size==0){
            return true;
        }
        else{
            return false;
        }
    }
    
    void enqueue(T element){
        
        if(size==capacity){
            cout<<"Queue is full";
            return;
        }
        if(next_index==size;)
        data[next_index]= element;
        
        next_index=(next_index+1) % capacity;
        
        if(first_index==-1){
            first_index=0;
        }
        size++;
    }
    
    T front(){
        if(get_size()==0){
            cout<<"Queue is empty";
            return ;
        }
    
        return data[first_index];
    }
    
    T dequeue(){
        if(get_size()==0){
            cout<<"Queue is empty";
            return ;
        }
        
        T ans= data[first_index];
        size--;
        first_index=(first_index+1)%capacity;
        if(size==0){
            first_index=-1;
            next_index=0;
        }
        return ans;
    }
    
};

