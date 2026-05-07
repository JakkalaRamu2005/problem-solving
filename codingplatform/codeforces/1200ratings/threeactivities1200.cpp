#include <bits/stdc++.h>
using namespace std;
#define ll long long 
// I got almost the implementtaion, just I took help of the manichandana, and kaustaub,
// to solve this problem.

// the question is asking the maximum value from the ax,by,cz 
// from the given three vectors, the indexes of the ai,bi,ci should be due 
// for this I am keeping the three different vectors, a,b,c, pair<int,int> in the first value, the ithe value, in the .second I will store the indexes, and I will sort it in the greater<int> 
// and I will write a for loop for checking all the possible cases of the first three greater values 
// in the all the vectors, when i values are diffeerent keep updating my answer to maxinum 
int main() {
	// your code goes here
	
	int t; cin>>t;
	while(t--){
	    int n; cin>>n;
	    
	   // for(int i=0;)
	 
	    vector<pair<int,int>> a;
	    vector<pair<int,int>> b;
	    vector<pair<int,int>> c;
	    for(int i=0; i<n; i++){
	        int x; cin>>x;
	        a.push_back({x,i});
	    }
	    for(int i=0; i<n; i++){
	        int x; cin>>x;
	        b.push_back({x,i});
	    }
	    for(int i=0; i<n; i++){
	        int x; cin>>x;
	        c.push_back({x,i});
	    }
	    
	    sort(a.begin(),a.end(),greater<pair<int,int>>());
	    sort(b.begin(),b.end(),greater<pair<int,int>>());
	    sort(c.begin(),c.end(),greater<pair<int,int>>());
	    ll ans=0;
	    for(int i=0; i<=2; i++){
	        for(int j=0; j<=2; j++){
	            for(int k=0; k<=2; k++){
	                set<int> s={a[i].second,b[j].second,c[k].second};
	                if(s.size()==3){
	                    ll sum=a[i].first+b[j].first+c[k].first;
	                    ans = max(ans,sum);
	                }
	            }
	        }
	    }
	    
	    cout<<ans<<"\n";
	    
	}
	
	return 0;

}
