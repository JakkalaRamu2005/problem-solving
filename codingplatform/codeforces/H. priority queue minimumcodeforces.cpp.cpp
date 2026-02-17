#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	priority_queue<int,vector<int>,greater<int>> pq;
// 	pq.push(1);
// 	pq.push(2);
// 	pq.push(3);
// 	pq.push(4);
	
// 	while(!pq.empty()){
// 	    cout << pq.top() << endl;
// 	    pq.pop();
// 	}
    
    int n; cin>>n;
    for(int i=0; i<n; i++){
        string s; cin>>s;
        if(s=="push"){
            int x; cin>>x;
            pq.push(x);
        }else if(s=="pop"){
            pq.pop();
        }else if(s=="top"){
            cout << pq.top() << endl;
        }
    }


}
