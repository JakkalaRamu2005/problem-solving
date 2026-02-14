#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n,m; cin>>n>>m;
	vector<int> nums;
	for(int i=0; i<m; i++){
	    int num; cin>>num;
	    nums.push_back(num);
	}
	int co=0;
	vector<int> result;
	for(int i=1; i<=n; i++){
	    int c = count(nums.begin(),nums.end(),i);
	    
	    if(c==0){
	        result.push_back(i);
	        co++;
	    }
	    
	}
	
	cout << co << endl;
	if(result.size()>0){
	    for(auto i: result){
	        cout << i << " ";
	    }
	}

}


#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n,m; cin>>n>>m;
	vector<int> nums;
vector<int> result(n+1,0);
	for(int i=0; i<m; i++){
	    int num; cin>>num;
	    result[num]=1;
	}
	int co=0;
	for(int i=1; i<=n; i++){
	    if(result[i]==0){
	        nums.push_back(i);
	        co++;
	    }
	    
	    
	}
	
	cout << co << endl;
	for(auto i: nums){
	    cout << i << " ";
	}
	
	
	



}

