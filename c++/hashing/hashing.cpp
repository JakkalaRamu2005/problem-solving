#include <bits/stdc++.h>
using namespace std;

int main(){


    int arr[] = {99,5,99,7,5,5};
    int n=6;

    unordered_map<int,int> map;
    for(int i=0; i<n; i++){
        map[arr[i]]+=1;
    }

    int res=INT_MIN;
    int max_freq = 0;

    for(pair<int,int> p: map){
        if(p.second>max_freq){
            res=p.first;
            max_freq = p.second;
        }
        // cout << p.first << " : " << p.second << endl;

    }
    cout << res << endl;
}