#include <bits/stdc++.h>
using namespace std;


//-> you have to see how it's working, in side it's not just about 

Node* deleteHead(Node* head){
    if(head == nullptr){
        return head;
    }
    
    Node* temp = head;
    
    head = head->next;
    delete temp;
    return head;
}

int main() {
	// your code goes here

}
