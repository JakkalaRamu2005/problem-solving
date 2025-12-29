#include <bits/stdc++.h>
using namespace std;


Node* insertAtHead(Node* head, int a){
    Node* n = new Node(a);
    n->next = head;
    head = n;
    return head;
    
}

Node* insertAtTail(Node* head, int a){
    if(head == nullptr){
        Node*n = new Node(a);
        return n;
    }
    
    Node* temp = head;
    while(temp->next!= nullptr){
        temp = temp->next;
    }
    Node* n = new Node(a);
    temp->next = n;
    return head;
}

int main() {
	// your code goes here
// 	types of inserttion in a Linked List.
// 	->insert at the head 
// 	-> insert at the tail.
// 	->insert at the kth position
// 	->insert before a node with value 'x'


    insertAtHead(head, a);

}
