#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
class Solution {
public:
    int firstUniqChar(string s) {

        	vector<int>freq (26,0);
	
	
	
	
	for(auto i: s){
	    int a = i-'a';
	    freq[a]++;
	}
	
	
	for(int i=0; i<s.size(); i++){
	    
	    if(freq[s[i]-'a']==1){
	        return i;
	    }
	    
	}

    return -1;
        
    }
};
	


}
