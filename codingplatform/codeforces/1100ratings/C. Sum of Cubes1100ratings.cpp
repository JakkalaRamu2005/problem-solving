#include <bits/stdc++.h>
using namespace std;
#define vi vector<ll> 
#define ll long long
#define fastio() ios::sync_with_stdio(false); cin.tie(NULL);



int main() {
    
    ll n; cin>>n;
    int t; cin>>t;
    bool flag = true;
    for(ll i=1; (i*i)*i<=n; i++){
        ll remaining = n-((i*i)*i);
        for(ll j=1; j*j*j<=remaining; j++){
            if(remaining%(j*j*j)==0){
                cout<<"YES\n";
                flag = false;
            }
        }
    }

    if(flag)cout<<"NO\n";

    
    return 0;
}