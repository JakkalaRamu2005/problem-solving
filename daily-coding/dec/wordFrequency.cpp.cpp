#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	
	
	// Question:
// Given a sentence, count how many times each word appears
// and print every word with its frequency.

	
	string s;
	getline(cin, s);
	
	map<string,int> mp;
	
    stringstream ss(s);
    
    string word;
    
    while(ss>>word){
        
        mp[word]++;
    }
    
    
    
    for(auto wrd: mp){
        
        cout << wrd.first << " " << wrd.second << endl;
    }
    

}
