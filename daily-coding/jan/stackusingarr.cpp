#include<bits/stdc++.h>
using namespace std;

class Stack{
    int *arr;
    int top;
    int capacity;
    public:
    Stack(int cap){
        capacity= cap;
        arr = new int[cap];
        top=-1;
    }

void push(int num){
    if(top==capacity-1){
        cout<<"overflow";
        return;
    }
    top = top+1;
    arr[top]=num;
    // cout<<arr[top] << endl;
}
int topElement(){
    if(top==-1){
        return -1;
    }
    return arr[top];
}
int size(){
    if(top==-1){
        return -1;
    }
    return top;
}

int full(){
    if(top==capacity-1){
        return 
    }
}
};
int main() {
 Stack stack(4);
 stack.push(10);
 stack.push(233);
 cout << stack.topElement() << endl;
 cout << stack.size() << endl;
 cout << (stack.full() ? "Yes":"No") << endl;
  return 0;
}