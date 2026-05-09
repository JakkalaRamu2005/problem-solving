33. Search in Rotated Sorted Array

class Solution {
public:
    int search(vector<int>& arr, int x) {
        
        int low = 0;
        int high = arr.size()-1;
        while(low<=high){
            int mid = (low+high)/2;
            if(arr[mid]==x){
                return mid;
            }

            if(arr[low]<=arr[mid]){
                if(arr[low]<=x && x<=arr[mid]){
                    high = mid-1;
                }else{
                    low = mid+1;
                }
            }else if(arr[mid]<=arr[high]){
                if(arr[mid]<=x&&x<=arr[high]){
                    low = mid+1;
                }else{
                    high = mid-1;
                }
            }

        }

        return -1;

    }
};
