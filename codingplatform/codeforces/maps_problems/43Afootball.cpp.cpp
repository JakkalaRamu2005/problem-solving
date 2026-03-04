#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n; cin>>n;
	unordered_map<string,int> freq;
	int max_score=-1;
	string winner;
	while(n--){
	    string s; cin>>s;
	    freq[s]++;
	    
	    if(freq[s]>max_score){
	        max_score = freq[s];
	        winner=s;
	    }
	    
	    
	}
	cout << winner << endl;
	

}
