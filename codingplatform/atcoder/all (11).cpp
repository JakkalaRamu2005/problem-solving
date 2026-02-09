#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    vector < int > nums;
    for (int i = 0; i < 5; i++) {
        int n;
        cin >> n;
        nums.push_back(n);
    }
    
    bool condi = false;
    for (int i = 0; i < nums.size() - 1; i++) {
        if (nums[i + 1] < nums[i]) {
            swap(nums[i+1],nums[i]);
            condi=true;
            break;
        }
    }
    
    int c=0;
    for(int i=0; i<nums.size()-1; i++){
        if (nums[i+1]>nums[i]){
            c++;
        }
    }
    
    if(condi&&c==nums.size()-1){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    
    
    
}