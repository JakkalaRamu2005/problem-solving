#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    
    int n; cin>>n;
    unordered_map<string,set<string>> mpp;
    int c=0;
    while(n--){
        string tree,color; cin>>tree>>color;
        
        if(mpp.find(tree)==mpp.end()){
            mpp[tree].insert(color);
            c++;
        }else{
            if (mpp[tree].find(color)==mpp[tree].end()){
                c++;
                mpp[tree].insert(color);
            }
        }
    }

cout << c << endl;


return 0;

}




