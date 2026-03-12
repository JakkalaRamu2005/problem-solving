#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n,m; cin>>n>>m;
	vector<int> a(n),b(m);
	for(int i=0; i<n; i++) cin>>a[i];
	
	for(int j=0; j<m; j++) cin>>b[j];
	
	sort(a.begin(),a.end());
	sort(b.begin(),b.end());
	
	
	bool flag = true;
	
	for(int i: a){
	    for(int j: b){
	        if(i==j){
	            cout << i << endl;
	            flag = false;
	            break;
	        }
	    }
	    if(!flag) break;
	}
	
	if(flag){
	    int n1 = a[0];
	    int n2 = b[0];
	    int first = min(n1,n2);
	    int second = max(n1,n2);
	    cout << first << second << endl;
	}


return 0;

}


