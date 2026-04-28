class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        
        vector<int> ans;
        if(p.size()>s.size()) return ans;
        vector<int> sfreq(27,0);
        vector<int> pfreq(27,0);
        for(char pch: p){
            pfreq[pch-'a']++;
        }

        int k = p.size();
        for(int i=0; i<k; i++){
            sfreq[s[i]-'a']++;
        }
        if(pfreq==sfreq)ans.push_back(0);

        for(int i=k; i<s.size(); i++){
            sfreq[s[i-k]-'a']--;
            sfreq[s[i]-'a']++;
            if(pfreq==sfreq)ans.push_back(i-(k-1));
        }

    
        return ans;

    }
};
