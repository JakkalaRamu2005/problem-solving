class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        // brooteforceapprachwritten by me

        int co= 0;
  for(int i=0; i<s.size(); i++){
      vector<char> let;
  for(int j=i; j<s.size(); j++){
          bool cond= find(let.begin(),let.end(),s[j])!=let.end();
          if(!cond){
              let.push_back(s[j]);
          }else{
              break;
          }
         
         if(let.size()>co){
             co = let.size();
         }
      }
  }
  
  return co;
        
    }
};