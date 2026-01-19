#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
// 	a[] = [2, 4, 7, 10], b[] = [2, 3]

// this is the naive broute force solution in which I am coding, and where i am also keeping the track 
// of the problems that I am solving everyday.

    vector<int> a={2,4,7,10};
    vector<int> b={2,3};
    
    vector<int> c;
    
    int n = a.size();
    int m = b.size();
    int index =0;
    int left=0;
    int right=0;
    
    while(left<n && right<m){
        if(a[left]<=b[right]){
            c.push_back(a[left]);
            left++,index++;
        }else{
            c.push_back(b[right]);
            right++,index++;
        }
    }
    
    while(left<n){
        c.push_back(a[left]);
        left++;
        // c=a[left++.pu];
    }
    while(right<m){
        c.push_back(b[right]);
        right++;
        // c[index++]=b[right++];
    }
    
    for(int i=0; i<n+m; i++){
        if(i<n) a[i]=c[i];
        else b[i-n]=c[i];
    } 
    
    for(auto j: a){
        cout << j << " ";
    }
    cout << endl;
    for(auto k: b){
        cout << k << " ";
    }
   

}
