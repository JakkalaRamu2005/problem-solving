#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n; cin >> n;
	stack<int> st;
	
	for(int i=0; i<n; i++){
	    string type;
	    cin >> type; 
	    
	    if(type=="push"){
	        int x;
	        cin >>x;
	        st.push(x);
	        
	    }else if (type=="pop"){
	        st.pop();
	    }else if(type=="top"){
	        cout << st.top() << "\n";
	    }
	}
	

}
