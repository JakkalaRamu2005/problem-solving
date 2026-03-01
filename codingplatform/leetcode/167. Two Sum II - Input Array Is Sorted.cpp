 unordered_map<int,int> mpp;
  for(int i=1; i<=arr.size(); i++){
      int x = target-arr[i-1];
      if(mpp.find(x)!=mpp.end()){
          cout << mpp[x] << " " << i << endl;
      }
      mpp[arr[i-1]]=i;
  }
