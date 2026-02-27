class Solution {
public:
    int lengthOfLongestSubstring(string s) {
    //    string s="bbbbb";
		int ma = 0;
	
	for(int i=0; i<s.size(); i++){
	        int c=0;
	        multiset<char> ms;
	    for(int j=i; j<s.size(); j++){
	        
	        if(ms.find(s[j])==ms.end()){
	            ms.insert(s[j]);
	            c++;
	        }else{
	            break;
	        }
	        ma = max(ma,c);
	      
	    }
	    
	    
	   
	    
	}
	return ma;
    }
};
