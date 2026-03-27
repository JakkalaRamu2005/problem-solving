#include <bits/stdc++.h>
using namespace std;
#define vi vector<int> 
#define ll long long
#define fastio() ios::sync_with_stdio(false); cin.tie(NULL);

vector<bool> sieve(){
    vector<bool> isprime(1e6+1,true);
    for(int i=2; i*i<=1e6; i++){
        if(isprime[i]){
            for(int j=i*i; j<=1e6; j+=i){
                if(isprime[j]){
                    isprime[j]=false;
                }
            }
        }
    }

    return isprime;
    
}



int main() {
    fastio();
    int n; cin>>n;
    vector<bool> isprime = sieve();
    for(int i=n; i<=1e6; i++){
        if(isprime[i]){
            cout << i << endl;
            break;
        } 
    }

    

   
    
    return 0;
}
