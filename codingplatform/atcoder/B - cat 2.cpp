#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n; cin>>n;
	vector<string> st;
	for(int i=0; i<n; i++){
	    string k; cin>>k;
	    st.push_back(k);
	}
	set<string> s;
	for(int i=0; i<n; i++){
	    for(int j=0; j<n; j++){
	        string str;
	        if(i!=j){
	        str = st[i]+st[j];
	        s.insert(str);
	        }
	       
	    }
	}
	cout << s.size() << endl;
}
