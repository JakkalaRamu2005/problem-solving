// #include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {

    int n; cin>>n;
    vector<long long> arr(n);
    for(int i=0; i<n; i++){
        int x; cin>>x;
        arr[i]=x;
    }
    bool condi = true;
    for(int i=1; i<n-1; i++){
        __int128 x = arr[i+1]*arr[i-1];
        __int128 y = arr[i]*arr[i];
        if((long long) x != (long long) y){
            condi = false;
            break;
        }
    }
    
    if(condi){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }

}
