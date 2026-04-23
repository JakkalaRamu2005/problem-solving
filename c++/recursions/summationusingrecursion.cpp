#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define vll vector<long long>
#define vi vector<ll> 
// if they have only one value,

ll summation(ll i,vi arr){
    ll n = arr.size();
    if(i==n)return 0;
    return arr[i]+summation(i+1,arr);
}

int main() {
ll n; cin>>n;
vi arr(n);

for(ll i=0; i<n; i++)cin>>arr[i];
    cout<<summation(0,arr);








return 0;

}
