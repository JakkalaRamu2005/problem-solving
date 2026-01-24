#include <bits/stdc++.h>
using namespace std;
class Queue{
    private:
    stack<int> st1,st2;
    public:
    void push(int x){
        st1.push(x);
    }
    void pop(){
        if(!st2.empty()){
            st2.pop();
        }else{
            while(!st1.empty()){
                st2.push(st1.top());
                st1.pop();
            }
            st2.pop();
        }
    }
    
    int front(){
        if(!st2.empty()){
            return st2.top();
        }else{
            while(!st1.empty()){
                st2.push(st1.top());
                st1.pop();
            }
            
            return st2.top();
        }
    }
    
    int back(){
        if(!st1.empty()){
            return st1.top();
        }else{
            while(!st2.empty()){
                st1.push(st2.top());
                st2.pop();
            }
            return st1.top();
        }
    }
    
    int size(){
        return st1.size()+st2.size();
    }
    
    int isEmpty(){
        return st2.empty() && st1.empty();
    }
};

	// your code goes here
	int main() {
    Queue q;

    q.push(10);
    q.push(20);
    q.push(30);

    cout << "Front: " << q.front() << endl; // expected 10
    cout << "Back: " << q.back() << endl;   // expected 30
    cout << "Size: " << q.size() << endl;   // expected 3

    q.pop(); // removes 10

    cout << "Front after pop: " << q.front() << endl; // expected 20
    cout << "Back after pop: " << q.back() << endl;   // expected 30
    cout << "Size after pop: " << q.size() << endl;   // expected 2

    q.pop(); // removes 20
    q.pop(); // removes 30

    cout << "Is Empty: " << q.isEmpty() << endl; // expected 1 (true)

    return 0;
}



