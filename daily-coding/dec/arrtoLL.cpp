#include <iostream>
#include <vector>

using namespace std;

class Node{
    public:
    int data;
    Node* next;
    
    Node(int value){
        data = value;
        next = nullptr;
    }
};

Node* arrtoLL(vector<int> arr, int n){
    if(n==0) return nullptr;
    
    Node* head = new Node(arr[0]);
    Node* cur = head;
    
    for(int i=1; i<=n-1; i++){
        Node* temp = new Node(arr[i]);
        cur->next = temp;
        cur = cur->next;
    }
    
    return head;
}



int main(){
    
    
    vector<int> arr = {1,3,4,5,67};
    int n = arr.size();
    
    Node* head = arrtoLL(arr, n);
    cout << head->data;
    
    
}
