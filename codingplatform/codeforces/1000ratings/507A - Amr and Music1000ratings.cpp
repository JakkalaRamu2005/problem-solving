#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here

    int n, k;
    cin >> n >> k;
    vector < int > arr(n);
    map < int, vector < int >> mpp;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        arr[i] = x;
        mpp[x].push_back(i + 1);
    }


    sort(arr.begin(), arr.end());

    int s = 0;
    vector < int > result;
    for (int i = 0; i < n; i++) {
         if (s+arr[i] > k) {
            break;
        }
        s += arr[i];
        result.push_back(arr[i]);
        
       
    }

    // vector<int> res;
    cout << result.size() << endl;
    for(int i: result){
        cout << mpp[i].back() << " ";
        // res.push_back(mpp[i].back());
        mpp[i].pop_back();
    }



    return 0;

}
