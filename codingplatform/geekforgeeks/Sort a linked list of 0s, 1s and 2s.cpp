/* Node is defined as
  class Node {
  public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};
*/
class Solution {
  public:
    Node* segregate(Node* head) {
        // code here
        	int one=0; 
	int two=0;
	int zero=0;
	
// 	Node* head = new Node(1);
// 	head->next = new Node(2);
// 	head->next->next = new Node(2);
// 	head->next->next->next = new Node(1);
// 	head->next->next->next->next = new Node(0);
	
	Node* temp = head;
	while(temp!=nullptr){
	    if(temp->data==0) zero++;
	    else if(temp->data==1) one++;
	    else if(temp->data==2) two++;
	    temp = temp->next;
	}
	
    int c=1;
    temp = head;
    while(temp!=nullptr){
        if(c<=zero){
            temp->data=0;
        }else if(c<=zero+one){
            temp->data=1;
        }else{
            temp->data=2;
        }
        temp = temp->next;
        c++;
    }
    return head;
    
    }
};
