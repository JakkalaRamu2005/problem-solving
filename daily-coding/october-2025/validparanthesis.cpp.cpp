#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	stack<char> s;
	
	string str = "()[]{}";
	
	for(auto letter: str){
	    if(letter == "{" || letter =="[" || letter=="(") s.push(letter);
	    
	    else{
	        if(letter=="}" && s.top()!="{" || letter =="]" && s.top()!="[" || letter=="(" && s.top()!=")"){
	           cout << "not";
	        }else{
	            if(!s.isempty()){
	                cout << "Not";
	            }else{
	                cout << "yes";
	            }
	        }
	    }
	}

}
