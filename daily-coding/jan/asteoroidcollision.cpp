#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	vector<int> arr={3,5,-6,2,-1,4};
	
	int n = arr.size();
	stack<int> st;
	
	for(int i=0; i<n; i++){
	    
	    if(arr[i]>0){
	        st.push(arr[i]);
	    }else{
	        while(!st.empty() && st.top()>0 && st.top()+arr[i]<0){
	            st.pop();
	        }
	        
	        if(st.empty() || st.top()<0){
	            st.push(arr[i]);
	        }else if(st.top()+arr[i]==0){
	            st.pop();
	        }
	    }
	}
	
	
	
	vector<int> ans(st.size());
	int i = st.size()-1;
	while(!st.empty()){
	   
	    ans[i]=st.top();
	     st.pop();
	    i--;
	}
	
	for(auto i: ans){
	    cout << i << " ";
	}

}
