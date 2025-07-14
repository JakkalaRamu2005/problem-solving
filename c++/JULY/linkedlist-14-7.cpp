#include <bits/stdc++.h>
using namespace std;

class Node {
public: 
    int data;
    Node* next;
    
    Node(int val, Node* address) {
        data = val;
        next = address;
    }
    
    Node(int val) {
        data = val;
        next = nullptr;
    }

    Node() {
        data = 0;
        next = nullptr;
    }
};

int main() {
    int n;
    cin >> n;
  
    int arr[n];
  
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
  
    Node* head = new Node(arr[0]);
    Node* curr = head;  
  
    for (int i = 1; i < n; i++) {
        Node* n = new Node(arr[i]);
        curr->next = n;  
        curr = n;
    }

    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;  
    

    return 0;
}
