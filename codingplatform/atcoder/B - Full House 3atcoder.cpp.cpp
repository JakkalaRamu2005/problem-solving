#include <bits/stdc++.h>
using namespace std;

int main(){
    
    unordered_map<int,int> mpp;
    
    for(int i=0; i<7; i++){
        int n; cin>>n;
        mpp[n]++;
    }
    
    int co=0;
    int c=0;
    int x,y;
    for(auto it: mpp){
        if(it.second>=3){
            co++;
             x = it.first;
        }
        if(it.second>=2){
            c++;
            y = it.first;
        }
    }
    
    
    if((co>=1&&c>=1)&&(x!=y)){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
  
}