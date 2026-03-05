#include <bits/stdc++.h>
using namespace std;

int bruteForce(vector<int>& arr) {
    int n = arr.size();
    int ans = 1;

    for(int i = 0; i < n; i++) {
        int len = 1;

        for(int j = i + 1; j < n; j++) {
            if(arr[j] >= arr[j - 1]) {
                len++;
                ans = max(ans, len);
            } else {
                break;
            }
        }
    }

    return ans;
}

int optimal(vector<int>& arr) {
    int longest = 1;
    int current = 1;

    for(int i = 1; i < arr.size(); i++) {

        if(arr[i] >= arr[i-1]) {
            current++;
        } else {
            current = 1;
        }

        longest = max(longest, current);
    }

    return longest;
}

int main() {

    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << optimal(arr);

}


#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n; cin>>n; 
	vector<int> arr;
	
	while(n--) {
	    int x; cin>>x; arr.push_back(x);
	}
	    
	
	int prev=arr[0];
	int max_sub = 1;
	int count = 1;
	for(int i=1; i<arr.size(); i++){
	    if(arr[i]>=prev){
	        count++;
	        prev=arr[i];
	        max_sub = max(count, max_sub);
	    }else{
	        count=1;
	        prev=arr[i];
	    }
	}
	
	cout << max_sub << endl;

}
