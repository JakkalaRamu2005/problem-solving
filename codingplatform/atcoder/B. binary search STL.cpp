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
    for(int j=0; j<m; j++){
        string s; int n;
        cin>>s>>n;
        if(s=="lower_bound"){
            lower_bound(nums.begin(),nums.end(),n);
            cout << it << endl;
        }
    }

}
