z#include <bits/stdc++.h>
using namespace std;
#define ll long long 

int main() {
	// your code goes here
	
	int n,k; cin>>n>>k;
	ll sum=0;
	unordered_map<ll,ll> mpp;
	for(int i=0; i<n; i++){
	    int x; cin>>x;
	    sum+=x;
	    mpp[x]++;
	}
	
	priority_queue<long long>pq;
	
	for(auto pa: mpp){
	    pq.push(pa.first*pa.second);
	}
	
	while(k--){
	    sum-=pq.top();
	    if(sum<=0){
	        sum=0;
	        break;
	    }
	    
	    pq.pop();
	}
	
	cout<<sum<<"\n";
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;

}
