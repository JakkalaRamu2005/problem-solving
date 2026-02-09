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

Node* delete_node(Node* head, int position){
    // think and code 
    if(head==nullptr){
        return nullptr;
    }
    if(position==0){
        if(head->next == nullptr){
            delete head;
            return nullptr;
        }else{
            Node* temp = head;
            head = head->next;
            delete temp;
            return head;
        }
    }
    Node* temp = head;
     Node* prev;
    int c = 0;
    while(temp!=nullptr){
        if(c==position-2){
            prev = temp;
            cout << prev->data << " ";
        } 
            
        if(c==position-1){
            Node* prev = temp;
            cout << prev->data << " ";
            // Node* del = temp;
            delete prev;
            prev->next = temp->next;
            // break;
        }
         temp = temp->next;
         c++;
    }
    return head;
}
Node* delete_x(Node* head, int x){
    
    if(head==nullptr){
        return head;
    }
    
    if(head->data==x){
        Node* temp = head;
        head = head->next;
        delete temp;
        return head;
    }
    
    Node* temp = head;
    while(temp->next!=nullptr){
        if(temp->next->data==x){
            Node* n = temp->next;
            temp->next = temp->next->next;
            delete n;
            break;
        }
        temp = temp->next;
    }
    
    // printLL(head);
    return head;
    
}
Node* delete_k_index(Node* head, int k){
    if(head==nullptr){
        return nullptr;
    }
    if(k==0){
        Node* temp = head;
        head=head->next;
        delete temp;
        return head;
    }
    
    int c=0;
    Node* temp = head;
    while(temp->next!=nullptr){
        if(c==k-1){
            Node* n = temp->next;
            temp->next = temp->next->next;
            delete n;
            break;
        }
        temp = temp->next;
        c++;
    }
    return head;
}

int main() {
	// your code goes here
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    
    // Node* head2 = delete_x(head, 20); 


}
