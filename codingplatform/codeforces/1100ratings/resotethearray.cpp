#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int t; cin>>t;
	while(t--){
	    int n; cin>>n;
	    vector<int> ans(n);
	    vector<int> given(n-1);
	    for(int i=0; i<n-1; i++)cin>>given[i];
	    
	    ans[0]=given[0];
	    ans[n-1]=given[n-2];
	    
	    for(int i=1; i<n-1; i++){
	        ans[i]=min(given[i],given[i-1]);
	    }
	    
	    for(int x: ans)cout<<x<<" ";
	    
	    cout<<"\n";
	}

}
