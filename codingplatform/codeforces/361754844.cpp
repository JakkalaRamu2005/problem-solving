#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here

    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        int len;
        cin >> len;
        // cout << len << endl;
        string first,second;
        cin >> first >> second;
        // cout << first << " " << second << endl;
        sort(first.begin(),first.end());
        sort(second.begin(),second.end());
        
        
        if(first==second) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    

}
