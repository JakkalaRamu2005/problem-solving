#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	priority_queue<int> pq;
	
	
	int n; cin>>n;
	for(int i=0; i<n; i++){
	    string s; cin>>s;
	    if(s=="push"){
	        int x; cin>>x;
	        pq.push(x);
	    }else if(s=="top"){
	        cout << pq.top() << endl;
	    }else if(s=="pop"){
	        pq.pop();
	    }
	}

}
