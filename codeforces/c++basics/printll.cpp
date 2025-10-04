#include <bits/stdc++.h>
using namespace std;


bool searchLL(Node* head, int k){
    Node* temp = head;
    while(temp != nullptr){
        if(temp->data==k){
            return true;
        }
        temp=temp->next;
    }
    return false;
}
int main(){
    searchLL();
}