class Solution { // optimal solution by me 
public:
    int lengthOfLongestSubstring(string s) {
       // optimal solution which is going to run big o n 

       int j=0; 
       int i=0;
       unordered_map<char,int> f;
       int ans=0;
       int n = s.size();
       while(j<n){
            if(f[s[j]]==0){
                f[s[j]]++;
                j++;
                ans = max(ans,j-i);// updating to the window size 
            }else{
                f[s[i]]--;
                i++;
            }
       }
       return ans;
    }
};

// brpite force solution by me 
 int n = s.size();
        int ans=0;
        for(int i=0; i<n; i++){
            int c=0;
            unordered_map<char,int> freq;
            for(int j=i; j<n; j++){
                if(freq.find(s[j])==freq.end()){
                    freq[s[j]]++;
                    c++;
                }else{
                    break;
                }
            }

            ans = max(ans,c);
        }

        return ans;
