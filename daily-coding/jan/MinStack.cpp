#include<bits/stdc++.h>
using namespace std;

class MinStack{
    private:
        stack<pair<int,int>> stk;
    public:
    MinStack(){
        
    }
    void push(int x){
        if(stk.empty()){
            stk.push({x,x});
        }else{
            if(x<stk.top().second){
                stk.push({x,x});
            }else{
                stk.push({x, stk.top().second});
            }
        }
    }
    void pop(){
        if(stk.empty()) return;
        stk.pop();
    }
    int top(){
        if(stk.empty()) return 0;
        return stk.top().first;
    }
    int getMin(){
        if(stk.empty()) return 0;
        return stk.top().second;
    }
}

 
int main() {
  // write your code here...
  return 0;
}
