#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int n; cin>>n;
	vector<int> arr;
	while(n--){
	    int x; cin>>x;
	    arr.push_back(x);
	}
	
	for(int i=0; i<arr.size(); i++){
	    
	    if(arr[i]<=9){
	        cout << arr[i] << endl;
	    }else if(arr[i]>45){
	        cout << -1 << endl;
	    }else{
	        
	        int s=0;
	  
	        priority_queue<int>uni;
	        for(int i = 9; i >= 1; i--){
                uni.push(i);
            }
	        set<int> se = {9,8,7,6,5,4,3,2,1};
	        string num="";
	        bool flag = true;
	        while(se.size()>=0){
	            int to=uni.top();
	            se.erase(to);
	            s+=to;
	            num+= to_string(to);
	            int remain = arr[i]-s;
	           // cout << remain << endl;
	            uni.pop();
	            if(remain==0){
	                sort(num.begin(),num.end());
	                cout << num<< endl;
	                flag=false;
	                break;
	            }else if(remain<=se.size()){
	                num+=to_string(remain);
	                sort(num.begin(),num.end());
	                flag=false;
	                cout << num << endl;
	                break;
	            }else{
	                num+=to_string(uni.top());
	                s+=uni.top();
	                se.erase(uni.top());
	                uni.pop();
	            }
	            
	            
	        }
	        
	        if(flag){
	            cout << -1 << endl;
	        }
	        
	        
	        
	        
	    }
	    
	    
	}

}
