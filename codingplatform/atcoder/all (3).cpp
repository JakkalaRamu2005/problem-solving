#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* prev;
        Node* next;
    public:
        Node(int value, Node* previous, Node* next_address){
            data = value;
            prev = previous;
            next = next_address;
        }
    public: 
        Node(int value){
            data = value;
            prev = nullptr;
            next = nullptr;
        }
};

Node* arrtoDLL(vector<int> arr, int n){
    Node* head = new Node(arr[0]);
    Node* temp = head;
    for(int i=1; i<n; i++){
        Node* n = new Node(arr[i]);
        n->prev = temp;
        temp->next = n;
        temp = temp->next;
    }
    return head;
}
void printLL(Node* head){
    Node* temp = head;
    while(temp!=nullptr){
        cout << temp->data << " ";
        temp = temp->next;
    }
}

void delete_x(Node* head, int x){
    int count =1;
    Node* temp = head;
    while(temp->next!=nullptr){
        
        if(count==x){
            Node* back = temp->prev;
            cout << temp->next->data << " ";
        }
        temp = temp->next;
        count++;
    }
    
}
int main() {
  // write your code here...
  vector<int> arr={1,2,3,4};
  Node* head = arrtoDLL(arr,arr.size());
  
  delete_x(head,3);
  
  return 0;
}