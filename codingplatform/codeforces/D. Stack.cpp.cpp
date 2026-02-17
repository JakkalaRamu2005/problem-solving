#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	stack<int> st;
	int n; cin>>n;
	for(int i=0; i<n; i++){
	    string s; cin>>s;
	    if(s=="push"){
	        int x; cin>>x;
	        st.push(x);
	    }else if(s=="top"){
	        cout << st.top() << endl;
	    }else if(s=="pop"){
	        st.pop();
	    }
	}

}
