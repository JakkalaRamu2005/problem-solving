#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    
    Node(int value){
        data = value;
        next = NULL;
    }
};

class Queue{
    public:
    Node* front;
    Node* back;
    int size;
    Queue(){
        front=back=nullptr;
        size = 0;
    }
    
    void push(int x){
        Node* temp = new Node(x);
        if(size==0){
            front=back=temp;
        }else{
            back->next = temp;
            back = temp;
        }
        size++;
    }
    int sizeQ(){
        return size;
    }
    int frontElement(){
        if(size==0){
            cout << "Queue is empty";
            return -1;
        }
        return front->data;
    }
    int backElement(){
        if(size==0){
            cout << "queue is empty";
            return -1;
        }
        return back->data;
    }
    bool isEmpty(){
        return size==0;
    }
    void pop(){
        if(size==0){
            cout << "queue is empty";
        }
        if(size==1){
            front=back=nullptr;
        }
        Node* temp = front;
        front= front->next;
        delete temp;
        size--;
    }
    int getSize(){
        return size;
    }
};

int main() {
	// your code goes here
	Queue q;
	q.push(1);
	q.push(2);
	q.pop();
	cout <<"size of the queue:" <<q.getSize() << endl;
	cout << "frontElement:" << q.frontElement() << endl;
	cout << "backElement:" << q.backElement() << endl;
	cout << "isEmpty:" << q.isEmpty() << endl;
	
	

}
