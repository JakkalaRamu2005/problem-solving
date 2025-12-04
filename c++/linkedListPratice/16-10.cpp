#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node(int val){
        data = val;
        next = nullptr;
    }
 
};

int main(){


int arr[5]={1,2,3,4,5};
int n = 5;

Node* head = new Node(arr[0]);
// cout << head->data;
curr = head;
while(curr!=nullptr){
    for(int i=1; i<n;i++){
        Node* temp = new Node(arr[i]);
        curr->next = temp;

    }
    
}


return 0;
}