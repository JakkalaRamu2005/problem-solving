#include <bits/stdc++.h>
using namespace std;

class Queue{
    public:
    
    int *arr;
    int capacity;
    int size,front,back;
    
    Queue(int n){
        capacity = n;
        size =0;
        arr = new int[capacity];
        // front=-1;
        // back=-1;
    }
    
    bool isEmpty(){
        return size==0;
    }
    bool isFull(){
        return size==capacity;
    }
    
    void push(int x){
        if(size==capacity){
            cout << "full queue" << endl;
            return;
        }
        
        arr[size]=x;
        size++;
    }
    
    void pop(int x){
        if(size==0){
            cout << "empty queue" << endl;
            return;
        }
        
        for(int i=1; i<size; i++){
            arr[i-1]=arr[i];
        }
        size--;
        
    }
    
    int getFront(){
        
        if(isEmpty()){
            cout << "QUeue is empty";
            return -1;
        }
        return arr[0];
        
    }
    
    // return the back element of the queue 
    int getRear(){
        if(isEmpty()){
            cout << "queue is empty" << endl;
            return -1;
        }
        return arr[size-1];
    }
    
};

int main() {
	// your code goes here
	Queue q(3);
	q.push(10);
	q.push(20);
	q.push(30);
	cout << "Front:" << q.getFront() << endl;
   cout << "Rear:" << q.getRear() << endl;
}
