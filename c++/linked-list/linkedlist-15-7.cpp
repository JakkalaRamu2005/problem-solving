#include <bits/stdc++.h>
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
        next = nullptr;
    }

};


Node* insetAtHead(Node* head, int a){
    if(head == nullptr){
        Node* n = new Node(a);
        return n;
    }
    Node* temp = head;
    while(!temp->next != nullptr){
        temp=temp->next;
    }
    Node* n = new Node(a);
    temp->next = n;
    return head;
}

int main(){
    

}