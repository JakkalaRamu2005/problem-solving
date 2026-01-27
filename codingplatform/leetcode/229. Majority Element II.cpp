#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here

vector<int> arr = {3,2,3};
int n = arr.size();
vector<int> ans;


unordered_map<int,int> mpp;
for(int i: arr){
    mpp[i]++;
}

for(auto it: mpp){
    if(it.second>n/3){
        ans.push_back(it.first);
    }
}


for(int j: ans){
    cout << j << " ";
}



return 0;

}
