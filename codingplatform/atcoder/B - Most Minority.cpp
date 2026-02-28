#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n,m; cin>>n>>m;
	vector<string> st(n);
	for(int i=0; i<n; i++){
	    string s; cin>>s;
	    st[i]=s;
	}
	vector<int> res(n,0);
	for(int i=0; i<m; i++){
	    int x=0; // zeros 
	    int y=0; // ones 
	    vector<int> vote(n,0);
	    for(int j=0; j<n; j++){
	        if(st[j][i]=='0'){
	            x++;
	        }else{
	            y++;
	        }
	        vote[j]=st[j][i];
	    }
	    
	    if(x==0 || y==0){
	        for(int i=0; i<n; i++){
	            res[i]+=1;
	        }
	    }else if(x<y){
	        for(int i=0; i<n; i++){
	            if(vote[i]=='0'){
	                res[i]+=1;
	            }
	        }
	    }else{
	        for(int i=0; i<n; i++){
	            if(vote[i]=='1'){
	                res[i]+=1;
	            }
	        }
	    }
	    
	}
    
    priority_queue<int> pq;
    for(int x: res){
        // cout << x << endl;
        pq.push(x);
    }
    for(int i=1; i<=n; i++){
        if(res[i-1]==pq.top()){
            cout << i << " ";
        }
    }

}
