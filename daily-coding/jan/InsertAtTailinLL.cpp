Node* insertAtK(Node* head, int k, int a){
    if(head==nullptr){
        if(k==0){
            Node* n = new Node(a,head);
            return n;
        }
        if(k!=0) return nullptr;
      
    }
    
    if(k==0){
        Node* n = new Node(a, head);
        return n;
    }
    
    // main edge case
    Node* temp = head;
    int count=0;
    while(temp!=nullptr){
        if(count==k-1){
            Node* n = new Node(a);
            n->next = temp->next;
            temp->next = n;
            break;
        }
        temp = temp->next;
        count++;
      
    }
      return head;
}
int main() {
  // write your code here...
  int arr[]={1,2,3,4};
  int n = sizeof(arr)/sizeof(arr[0]);
  
  
 Node* head = arrtoLL(arr, n);
// Node* temp =inserAtHead(head, 0);
// insertAtTail(temp, 5);
Node* temp = insertAtK(head, 2, 5);
printLL(temp);
