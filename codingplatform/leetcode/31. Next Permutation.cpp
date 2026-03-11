class Solution {
public:
    void nextPermutation(vector<int>& arr) {


        int n = arr.size();
        int j = -1;
        for(int i=n-2; i>=0; i--){
            if(!(arr[i]>=arr[i+1])){
                j = i;
                break;
            }
        }
        if(j==-1){
            reverse(arr.begin(),arr.end());
            return;
        }
        for(int k=n-1; k>=j+1; k--){
            if(arr[k]>arr[j]){
                swap(arr[k],arr[j]);
                break;
            }
        }

        reverse(arr.begin()+j+1, arr.end());
    }
};
