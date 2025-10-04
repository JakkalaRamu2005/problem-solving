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
            next = nullptr;
        }Node(){
            data =0;
            next = nullptr;
        }
};

Node* arrayToLL(int arr[], int n){
    if(n==0){
        return nullptr;
    }
    Node* head = new Node(arr[0]);
    Node* cur = head;

    for(int i=1; i<=n-1; i++){
        Node* temp = new Node(arr[i]);
        cur->next = temp;
        cur = cur->next;
    }
    return head;
}



void printLL(Node* head){
    Node* temp = head;
    while(temp!=nullptr){
        cout << temp-> data <<" ";
        temp = temp->next;
    }
}

int lengthLL(Node* head){
    Node* temp = head;
    int count =0;
    while(temp != nullptr){
        count++;
        temp = temp->next;
    }
    return cout;
}


int main(){

   cout << arrayToLL(arr,n);
   printLL()
   lengthLL()


}