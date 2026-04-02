#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll maxx=1e7;



int main() {
	// your code goes her
    
    int n,t; cin>>n>>t;
    ll ans=0; 
    int track=0;
    for(int i=0; i<n;i++){
        int x; cin>>x;
        if(x>track){
           ans+=(x-track);
        //   cout<<x-track<<endl;
           track = x+100; 
        }
    }
    
    // cout<<track<<endl;
    if(track<t){
        ans+=(t-track);
    }
    
    cout<<ans<<endl;
    
    


	return 0;

}
