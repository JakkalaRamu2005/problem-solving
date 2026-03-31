#include <bits/stdc++.h>
using namespace std;
#define vi vector<ll> 
#define ll long long
#define fastio() ios::sync_with_stdio(false); cin.tie(NULL);



int main() {
    
    
    int t; cin>>t;
    while(t--){
        
        ll n; cin>>n;
     bool flag = true;
    for(ll i=1; i*i*i<=n; i++){
        ll remaining = n-(i*i*i);
        if(remaining==0){
            cout<<"NO\n"; flag=false;break;
        }
        else{
            ll x = cbrt(remaining);
            if((x*x*x)==remaining){
                cout<<"YES\n";
                flag=false;
                break;
            }
        }
            
    }
    
    if(flag){
        cout<<"NO\n";
    }

    
    }

    
    return 0;
}
