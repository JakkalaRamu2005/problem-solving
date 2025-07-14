#include<bits/stdc++.h>
using namespace std;

class Node{
    public: 
    int data;
    Node* next;
    
    Node(int val, Node* address){
        data = val;
        next = address;
    }
    
    Node(int val){
        data = val;
        next=nullptr;
    }
    Node(){
        data=0;
        next=nullptr;
    }
}

 
int main() {
  // write your code here...
  
  return 0;
}