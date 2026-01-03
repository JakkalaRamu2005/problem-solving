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
        data = 0;
        next = nullptr;
    }
};  


Node* arrtoLL(int arr[], int n){
    
    Node* head = new Node(arr[0]);
    Node* cur = head;
    for(int i=1; i<n; i++){
       Node* tem = new Node(arr[i]);
       cur->next = tem;
        cur = cur->next;
    }
    
    return head;
    
    
}

int main() {
	// your code goes here
	
	// input a->5
	// 20->30->40->50->null 
	
	//-5->30->40->50->null 
	
    // inserting a new at the head 
  
    

int arr[]={1,3,4,5};
int n = sizeof(arr)/sizeof(arr[0]);

// cout << n<< endl;



// cout << head->data << endl;

Node* head = arrtoLL(arr,n);

cout << head->data << endl;
Node* temp = head;

while(temp!=nullptr){
    cout << temp->data <<" ";
    temp=temp->next;
}
return 0;


    

}

