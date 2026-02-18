#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
// below is the optmized solution using the set or the unordered_set
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n,m; cin>>n>>m;
	set<int> nums;
	for(int i=0; i<n; i++){
	    int num; cin>>num;
	    nums.insert(num);
	}
	
    for(int i=-m; i<=m; i++){
       
       if(nums.find(i)==nums.end()){
           cout << i << endl;
           break;
       }
    }

}




    // broute force solution
	int n,m; cin>>n>>m;
	vector<int> nums(n);
	for(int i=0; i<n; i++){
	    int num; cin>>num;
	    nums[i] = num;
	}
	
    for(int i=-m; i<=m; i++){
        auto it = find(nums.begin(),nums.end(),i);
        if(it==nums.end()){
            cout << i << endl;
            break;
        }
    }

}
