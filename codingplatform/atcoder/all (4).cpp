https://atcoder.jp/contests/abc428/tasks/abc428_a#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	string s; cin>>s;
	string result="";
	int mid = (s.size()+1)/2;
// 	char mid = s[mid];
	for(int i=0; i<s.size(); i++){
	    if(i!=mid-1){
	        result+=s[i];
	    }
	}
	
	cout << result << endl;

}
