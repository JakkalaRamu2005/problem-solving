/*
class Node {
public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/
class Solution {
  public:
    Node* removeLastNode(Node* head) {
        // code here
        if(head==nullptr){
            return nullptr;
        }
        if(head->next == nullptr){
            Node* temp = head;
            delete temp;
            return nullptr;
        }
        
        Node* temp = head;
        while(temp->next->next!=nullptr){
            temp = temp->next;
        }
       
        Node* tail = temp->next;
        delete tail;
         temp->next = nullptr;
        temp = temp->next;
        return head;
    }
};

/*
class Node {
public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/
class Solution {
  public:
    Node* removeLastNode(Node* head) {
        // code here
        if(head==nullptr){
            return nullptr;
        }
        if(head->next == nullptr){
            Node* temp = head;
            delete temp;
            return nullptr;
        }
        
        Node* temp = head;
        while(temp->next->next!=nullptr){
            temp = temp->next;
        }
       
        Node* tail = temp->next;
        delete tail;
         temp->next = nullptr;
        temp = temp->next;
        return head;
    }
};


