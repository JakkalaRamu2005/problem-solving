

    vector<int> nums={0,0,0,1,1,1,1,0,0,1,1,1,1,1,1};
    int n = nums.size();
    int co=0;
    int onec=0;
    for(int i=0; i<n; i++){
        
        if(nums[i]==1){
            onec+=1;
        }else{
            onec=0;
        }
        
        if(onec>co) co = onec;
       
        
    }
    
    cout << co << endl;
    
