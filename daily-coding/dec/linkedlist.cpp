#include<bits/stdc++.h>
using namespace std;

class Node{
    public: int data;
    Node* next;
    
    Node(int value, Node* address){
        data = value;
        next = address;
    }
    Node(int value){
        data = value;
        next = nullptr;
    }
    Node(){
        data = 0;
        next = nullptr;
    }
};
void printLL(Node* head){
    Node* temp = head;
    while(temp!=nullptr){
        cout << temp->data << " ";
        temp = temp->next;
        // temp->next = temp;
    }
}
bool searchinLL(Node* head, int value){
    Node* temp = head;
    while(temp!=nullptr){
        if(temp->data==value){
            return true;
        }
        temp = temp->next;
    }
    return false;
}
int countLL(Node* head){
    Node* temp = head;
    int count=0;
    while(temp!=nullptr){
        temp = temp->next;
        count++;
    }
    return count;
}
Node* arrtoLL(int arr[], int n){
    Node* head = new Node(arr[0]);
    Node* temp = head;
    for(int i=1; i<n; i++){
        temp->next = new Node(arr[i]);
        temp = temp->next;
    }
    return head;
}
int main() {
  // write your code here...
  int arr[]={1,2,3,4};
  int n = sizeof(arr)/sizeof(arr[0]);
  Node* head = arrtoLL(arr, n);
//   printLL(head);
//   cout << countLL(head);
// cout << searchinLL(head,2);
  return 0;
}
