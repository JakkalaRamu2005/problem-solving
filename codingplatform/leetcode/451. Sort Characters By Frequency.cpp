#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	string s; cin>>s;
	unordered_map<char,int> mpp;
	for(char ch: s){
	    mpp[ch]++;
	}
	
	priority_queue<pair<int,char>>pq;
	
	for(auto c: mpp){
	   // cout << c.first << " " << c.second << endl;
	   pq.push({c.second,c.first});
	    
	}
	string st="";
	
	while(!pq.empty()){
	   // cout << pq.top().first << " " << pq.top().second << endl;
	    for(int i=0; i<pq.top().first; i++){
	        st+=pq.top().second;
	    }
	    pq.pop();
	}
	
	cout << st << endl;

}
