class Solution {
  public:
    void sort012(vector<int>& arr) {
        // code here
        int n = arr.size();
        int zeros=0,ones=0,twos=0;
        
        for(auto i: arr){
            if(i==1) ones++;
            else if(i==0) zeros++;
            else
                twos++;
        }
        
        for(int i=0; i<n; i++){
            if(i<zeros) arr[i]=0;
            else if(i<zeros+ones) arr[i]=1;
            else arr[i]=2;
        }
       
    }
};
