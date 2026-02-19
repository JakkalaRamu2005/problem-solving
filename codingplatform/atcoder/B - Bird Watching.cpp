#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
// 	map<int,vector<double>> mpp;
    
	
    // n and m 
    int n,m; cin>>n>>m;
    vector<int> count(m+1,0);
    vector<double> sum(m+1,0);
    
    for(int i=0; i<n; i++){
        int index,value; cin>>index>>value;
        count[index]++;
        sum[index]+=value;
    }
    
    
    for(int j=1; j<=m; j++){
        cout << sum[j]/count[j] << endl;
    }
}


#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	map<int,vector<double>> mpp;
	
    // n and m 
    int n,m; cin>>n>>m;
    for(int i=0; i<n; i++){
        double x,y; cin>>x>>y;
        mpp[x].push_back(y);
    }
    
    for(auto i:mpp){
        double sum = 0;
        for(double j: i.second){
           sum+=j;
        }
        
        cout << sum/i.second.size();
        
        cout << endl;
    }
}
