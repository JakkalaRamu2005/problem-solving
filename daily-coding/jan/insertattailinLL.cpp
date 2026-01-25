class Solution {
  public:
    Node *insertAtEnd(Node *head, int x) {
        // Code here
        if(head==nullptr){
            Node* temp = new Node(x);
            head = temp;
            return head;
        }
        if(head->next==nullptr){
            Node* temp = new Node(x);
            head->next = temp;
        }
        Node* temp = head;
        while(temp->next!=nullptr){
            temp = temp->next;
        }
        Node* tail = new Node(x);
        temp->next = tail;
        
        return head;
        
    }
};
