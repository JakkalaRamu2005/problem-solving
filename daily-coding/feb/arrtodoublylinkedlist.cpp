/*
class Node {
  public:
    int data;
    Node* next;
    Node* prev;

    Node(int d) {
        data = d;
        next = NULL;
        prev = NULL;
    }
};
*/

class Solution {
  public:
    Node* createDLL(vector<int>& arr) {
        // code here
        Node* head = new Node(arr[0]);
        Node* cur = head;
        for(int i=1; i<arr.size(); i++){
            Node* temp = new Node(arr[i]);
            temp->prev = cur;
            cur->next = temp;
            cur = cur->next;
        }
        
        return head;
    }
};
