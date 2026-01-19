#include <bits/stdc++.h>
using namespace std;

bool isValidParanthesis(string s){
    stack<char> st;
    
    for(int i=0; i<s.size(); i++){
        if(s[i]=='[' || s[i]=='(' || s[i]=='{'){
            st.push(s[i]);
        }else{
            if(st.empty()){
                return false;
            }else{
                char x=st.top();
                st.pop();
                if(s[i]==')' && x=='(' || s[i]==']' && x=='[' || s[i]=='}' && x=='{'){
                    continue;
                    // return true;
                }else{
                    return false;
                }
            }
        }
        
       
    }
     if(st.empty()) return true;
        return false;
}

int main() {
	// your code goes here
	string s = "()[]{}";
	
	bool result = isValidParanthesis(s);
	if(result){
	    cout << "true";
	}else{
	    cout << "false";
	}

}
