
    // your code goes here
  #include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--){
	    
	    	string s="abcdefghijklmnopqrstvwxyz";
	
	int n; cin>>n;
	vector<int> arr(n);
	vector<int> count(26,0);
	for(int i=0; i<n; i++)cin>>arr[i];
	
    string result="";
	
    for(int i=0; i<arr.size(); i++){
        i = i%26;
        if(arr[i]==0){
            result+=s[i];
            count[i]++;
        }else{
            for(int j=0; j<arr.size(); j++){
                j = j%26;
               if(count[j]==arr[i]){
                    result+=s[j];
                    count[j]++;
                   
                   break;
               }
            }
        }
    }
    
    
    
    cout << result << endl;
    
	}

    return 0;

}


