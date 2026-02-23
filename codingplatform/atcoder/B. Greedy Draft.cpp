#include <bits/stdc++.h>
using namespace std;

int main() {
int n,m; cin>>n>>m;

// vector<int> arr(m+1,0);
unordered_map<int,int>mpp;
vector<pair<int,vector<int>>> val(n);
// for(auto i: arr){
//     cout << i << " ";
// }

for(int i=0; i<n; i++){
    int x; cin>>x;
    val[i].first = x;
    vector<int> temp(x);
    for(int i=0; i<x;i++){
        int a; cin>>a;
        temp[i]=a;
    }
    val[i].second = temp;
    
}
for(auto i: val){
    int x = i.first;
    int c=0;
    bool condi = false;
    for(int j: i.second){
        if(mpp.find(j)!=mpp.end()){
            c++;
        }else{
            mpp[j]++;
            cout << j << endl;
            break;
        }
        
        if(c==x){
            cout << 0 << endl;
        }
    }
    // cout << endl;
}





}
