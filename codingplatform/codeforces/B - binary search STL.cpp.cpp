#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int n, m;
    cin >> n >> m;
    vector < int > nums;
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        nums.push_back(num);
    }

    sort(nums.begin(),nums.end());
    for(int j=0; j<=m; j++){
        string s; int n;
        cin>>s>>n;
        if(s=="lower_bound"){
            auto it = lower_bound(nums.begin(),nums.end(),n);
            if(it!=nums.end()){
                cout << *it << endl;
            }else{
                cout << -1 << endl;
            }
        }else if(s=="binary_search"){
            if(binary_search(nums.begin(),nums.end(),n)){
                cout << "found" << endl;
            }else{
                cout << "not found" << endl;
            }
        }else if(s=="upper_bound"){
            auto it = upper_bound(nums.begin(),nums.end(),n);
            if(it!=nums.end()){
                cout << *it << endl;
            }else{
                cout << -1 << endl;
            }
        }
    }

}