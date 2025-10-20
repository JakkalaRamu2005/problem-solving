#include <bits/stdc++.h>
using namespace std;

int main(){
	vector<int> nums = {0,1,2,2,3,0,4,2};
	int val = 2;
	vector<int> nums2;
	
	int j=0;

	for(int i=0; i<nums.size(); i++){
	    
	    if(nums[i]!=val){
	        nums2.push_back(nums[i]);
	    }
	}
	nums.swap(nums2);
	
	for(auto x: nums){
	    cout << x << " ";
	}


    return 0;
}

/* #include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums = {0, 1, 2, 2, 3, 0, 4, 2};
    int val = 2;

    int j = 0; // pointer for the next valid element
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] != val) {
            nums[j] = nums[i]; // overwrite the value at j
            j++;
        }
    }

    // resize the vector to remove the extra elements at the end
    nums.resize(j);

    // print result
    for (auto x : nums) {
        cout << x << " ";
    }

    return 0;
}
 */



/*  int main() {
    vector<int> nums = {0, 1, 2, 2, 3, 0, 4, 2};
    int val = 2;

    // remove all 'val' elements and erase the extra at the end
    nums.erase(remove(nums.begin(), nums.end(), val), nums.end());

    // print result
    for (auto x : nums) {
        cout << x << " ";
    }

    return 0;
} */






