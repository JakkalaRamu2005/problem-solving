#include<bits/stdc++.h>
using namespace std;
 
 class Node{
     public: 
     int data;
     Node*  next;
     
     Node(int value, Node* address){
         data = value;
         next = address;
     }
     
 };
 
 
 Node* merageTwoLists(Node* head1, Node* head2){
     Node* temp1 = head1;
     Node* temp2 = head2;
     Node* cur = new Node();
     Node* dummy = cur;
     
     while(temp1 && temp2){
         if(temp1->data <= temp2->data){
             cur->down = temp1;
             cur = cur->down;
         }else{
             cur->down = temp2;
             cur = cur->down;
             temp2 = temp2->down;
         }
     }
     
   
 }




 
 Node* addtoNumbers(Node*a, Node* b){
     Node* temp1 = a;
     Node* temp2 = b;
     
     int carry =0;
     Node* ans = new Node(-1);
     Node* cur = ans;
     while(temp1 || temp2){
         int sum = carry;
         if(temp1) sum+= temp1->data;
         if(temp2) sum+= temp2->data;
         cur->next = new Node(sum%10);
         carry = sum/10;
         
         if(temp1) temp1= temp1->next;
         if(temp2) temp2= temp2->next;
         
         cur = cur->next;
         if(carry){
             cur->next = new Node(1);
         }
         return ans->next;
     }
 }
 
 // flatnend a linked list 
 
int main() {
  // write your code here...
  
  Node* flattenLL(Node* head){
    if(!head) return NULL;
    Node* temp1 = head;
    Node* temp2 = temp1->next;
    
    if(!temp2) return head;
    Node* next;
    while(temp1 && temp2){
        next = temp2->next;
        temp1 = merageTwoLists(temp1, temp2);
        temp2 = next;
    }
    return temp1;
}
  
  
  return 0;
}
