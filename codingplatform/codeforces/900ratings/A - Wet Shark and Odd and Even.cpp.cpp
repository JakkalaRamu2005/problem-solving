#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here

    int n; cin>>n;
    long long sum=0;
    long long ma=0;
    int mini = INT_MAX;
    
    while(n--){
        
        int x; cin>>x;
        sum+=x;
        if(x%2==1){
            mini = min(mini,x);
        }
        
    }
    
    if(sum%2==0){
        cout << sum << endl;
    }else{
        cout << sum-mini << endl;
    }
    // cout << mini << endl;
    

    
    return 0;
}
