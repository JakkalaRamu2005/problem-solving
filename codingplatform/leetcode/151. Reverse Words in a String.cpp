class Solution {
public:
    string reverseWords(string s) {
        	stringstream ss(s);
	
	
	
	string word;
	vector<string> words;
	string ans="";
	while(ss>>word){
	    words.push_back(word);
	}
	
	for(int i=words.size()-1; i>=0; i--){
	    ans+=words[i] + " ";
	}
	
	ans.pop_back();
	
	return ans;
    }
};
