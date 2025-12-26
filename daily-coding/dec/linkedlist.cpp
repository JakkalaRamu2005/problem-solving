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
        }
        Node(){
            data =0;
            next=nullptr;
        }
};



Node* arrtoLL(vector<int> arr, int n){
    if(n==0) return 0;
    
    Node* head = new Node(arr[0]);
    Node* cur = head;
    for(int i=1; i<n; i++){
        cur->next = new Node(arr[i]);
        cur= cur->next;
    }
    return head;
}

int main() {
	// your code goes here
	vector<int> arr = {1,2,3,4,5};
	int n = arr.size();
	
	Node* head = arrtoLL(arr, n);
	
    Node* temp = head;
    while(temp!=nullptr){
        cout << temp->data << " ";
        
        temp = temp->next;
    }
	

	

}
