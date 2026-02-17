#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	queue<int> q;
	int n; cin>>n;
	for(int i=0; i<n; i++){
	    string s; cin>>s;
	    if(s=="push"){
	        int x; cin>>x;
	        q.push(x);
	    }else if(s=="front"){
	        cout << q.front() << endl;
	    }else if(s=="back"){
	        cout << q.back() << endl;
	    }else if(s=="pop"){
	        q.pop();
	    }
	}

}
