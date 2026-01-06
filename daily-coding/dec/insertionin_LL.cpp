#include <bits/stdc++.h>
using namespace std;

// insertion in linkedList
//insert at the head;


class Node{
    int data;
    Node* next;
    
    
    Node(int value, Node* address){
        data = value;
        next = address;
    }
    
    Node(int value){
        data = value;
        next=nullptr;
    }
    Node(){
        data =0;
        next=nullptr;
    }
}

Node* arr_to_LL(Node* head, int n){
    
}


Node* insert_head(Node* head, int a){
    Node* n = new Node(a);
    n->next = head;
    head = n;
    
    return head;
}

int main() {
	// your code goes here
	int arr[] = {3,7,12,4,8};
	Node* head = arr_to_LL(arr,5);
    print_LL(head);
	

}
