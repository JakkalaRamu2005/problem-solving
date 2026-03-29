#include <bits/stdc++.h>

using namespace std;
#define vi vector < ll >
#define ll long long
#define fastio() ios::sync_with_stdio(false);cin.tie(NULL);




int main() {
    fastio();
    int t; cin>>t;
    while(t--){
        ll x,y,k; cin>>x>>y>>k;
        
        ll coal = k;
        ll sticks = (k*y)+coal;
        sticks--;
        ll total = sticks/(x-1);
        ll remain = sticks%(x-1);
        if(remain){
          total++;  
        } 
        cout << total+coal <<"\n";
    }

    return 0;
}
