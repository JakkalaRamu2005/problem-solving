/* Structure of Node
class Node {
  public:
    int data;
    Node *next;
    Node *prev;

    Node(int val) {
        data = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
*/

class Solution {
  public:
    Node* delPos(Node* head, int x) {
        // code here
          if(x==1){
        Node* temp = head;
        head = head->next;
        head->prev=nullptr;
        delete temp;
        return head;
    }
    int count =2;
    Node* temp = head->next;
    while(temp->next!=nullptr){
        
        if(count==x){
            Node* back = temp->prev;
            Node* next = temp->next;
            Node* n = temp;
            back->next = next;
            next->prev = back;
            
        }
        temp = temp->next;
        count++;
    }
    
    if(temp->next==nullptr&&count==x){
        Node* prev = temp->prev;
        delete temp;
        prev->next = nullptr;
    }
    return head;
    }
};
