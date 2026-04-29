#include <bits/stdc++.h>
using namespace std;
#define ll long long 

// approach, using priority queue, so that the smallest values willl be present at the top of the queue 

// if the pq.top() is less than ci, I am changing that to the ci, I will be continuting this for all queries 
// else I will break if the pq.top() is greater than the bi 
// finally I add the all the elements and print the answer .

// I got tle on 3 testcases for doing some unnecessary calculations, for now, I used the queue, to get only largest value 
// change them, let's whethe this will work or not .


int main() {
	// your code goes here
	int n,m; cin>>n>>m;
// 	vector<ll> arr(n);
    priority_queue<ll,vector<ll>,greater<ll>> pq;
	for(int i=0; i<n; i++){
	    ll x; cin>>x;
	    pq.push(x);
	}
	
	priority_queue<pair<ll,ll>,vector<pair<ll,ll>>> pairs;
	
	while(m--){
	    
	  ll bi,ci;
	  cin>>bi>>ci;
	  pairs.push({ci,bi});
	}
	while(!pairs.empty()){
	   // cout<<pairs.top().first << " "<<pairs.top().second<<"\n";
	   // pairs.pop();
	    ll number=pairs.top().first;
	    ll count=pairs.top().second;
	    if(pq.top()<number){
	    while(count--){
	        if(pq.top()<number){
	            pq.pop();
	            pq.push(number);
	        }else{
	            break;
	        }
	    }
	    }else{
	        break;
	    }
	 pairs.pop();
	}

	
	
	ll ans=0;
	while(!pq.empty()){
	    ans+=pq.top(); pq.pop();
	}
	
	cout<<ans<<"\n";

return 0;
}
