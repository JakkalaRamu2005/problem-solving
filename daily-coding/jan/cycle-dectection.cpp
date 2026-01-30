#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    
    int data;
    Node* next;
    Node(int value, Node* address){
        data = value;
        next = address;
    }
    Node(int value){
        data = value;
        next =nullptr;
    }
};

void printLL(Node* head){
    Node* temp = head;
    while(temp!=nullptr){
        cout << temp->data <<" ";
        temp = temp->next;
    }
}


bool cycle_detection(Node* head){
    // this is working fine bro for the linked list. actually.
    
    // which is the broute force solution actually.
    unordered_set<Node*> st;
    Node* temp =head;
    while(temp!=nullptr){
        if(st.find(temp)!=st.end()){
            return true;
        }
        st.insert(temp);
        temp = temp->next;
    }
    
    return false;
}
int main() {
	// your code goes here
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    cout << cycle_detection(head);
   

}
