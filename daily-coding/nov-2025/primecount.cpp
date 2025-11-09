

// leetcodequestion: 204. Count Primes


class Solution {
public:
    int countPrimes(int n) {

    if(n<2) return 0;

    vector<int> primes(n+1,1);
    primes[0]=0;
    primes[1]=0;
    
    for (int i=2; i<n; i++){
        
        
        if (primes[i]){
            
            for(int j=i*i; j<n; j+=i){
                primes[j]=0;
               
            }
        }
        
        
    }
    
    int c = count(primes.begin(),primes.end(),1);
    return c;
        
    }
};