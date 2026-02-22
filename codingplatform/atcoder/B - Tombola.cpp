#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    	int row,col,n; cin>>row>>col>>n;
    	vector<vector<int>> grid(row);
    	vector<int>values(n);


    	for(int i=0; i<row; i++){
    	    vector<int> temp(col);
    	    for(int j=0; j<col; j++){
    	        int x; cin>>x;
    	        temp[j]=x;
    	    }
    	    grid[i]=temp;
    	}


    	for(int i=0; i<n; i++){
    	    int k; cin>>k;
    	    values[i]=k;
    	}


        priority_queue<int> pq;
        for(int i=0; i<row; i++){
            vector<int> ro(grid[i]);
            int c=0;
              for(int k: values){
                  auto it = find(ro.begin(),ro.end(),k);
                  if(it!=ro.end()){
                      c++;
                  }
              }
              pq.push(c);
        }
        
        cout << pq.top() << endl;




}
