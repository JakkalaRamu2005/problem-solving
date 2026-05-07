#include <bits/stdc++.h>
using namespace std;
#define vi vector<ll> 
#define ll long long
#define fastio() ios::sync_with_stdio(false); cin.tie(NULL);



int main() {
    fastio();
    int t; cin>>t;
    while(t--){
        ll n; cin>>n;
        int nonZero=0;
        int divisibleCount=0;
        for(ll i=n; i>=0; i++){
                ll temp = i;
                while(temp!=0){
                    int lastDigit = temp%10;
                    if(lastDigit!=0)nonZero++;
                    if(i%lastDigit==0&&lastDigit!=0)divisibleCount++;
                    temp = temp/10;
                }

                if(nonZero==divisibleCount){
                    cout << i <<"\n";
                    break;
                }
        }
    }   
    
    return 0;
}