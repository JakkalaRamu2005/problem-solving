class Solution {
  public:
    vector<int> findUnion(vector<int>& a, vector<int>& b) {
        a.insert(a.end(),b.begin(),b.end());
        // code here
        map<int,int> count;

for(auto i: a){
    count[i]++;
}

vector<int> result;
for(auto key: count){
    result.push_back(key.first);
}
return result;
    }
};
