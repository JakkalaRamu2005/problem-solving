#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n; cin>>n;
	string s; cin>>s;
	unordered_map<string,int> freq;
	int max_count = 0;
	string result;
	for(int i=0; i<n-1; i++){
	    string st;
	    st+=s[i];
	    st+=s[i+1];
	   // cout << st << endl;
	    freq[st]++;
	    if(freq[st]>max_count){
	        max_count=freq[st];
	        result=st;
	    }
	    
	}
	cout << result << endl;

}
