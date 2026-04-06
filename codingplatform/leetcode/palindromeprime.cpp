

class Solution {
    #define ll long long
public:
    bool isprime(long long n){
    long long c=0;
    for(long long i=1; i*i<=n; i++){
        if(n%i==0){
            if(i!=n/i){
                c+=2;
            }else{
                c++;
            }
            if(c>2)break;
        }
    }
    
    return c==2;
    
}
    int primePalindrome(int n) {
        string even="";
    string odd="";
    long long oddprime=LLONG_MAX;
    long long evenprime=LLONG_MAX;
    for(ll i=1; i<=1e5; i++){
        string s = to_string(i);
        string r = s;
        reverse(r.begin(),r.end());
        even = s+r;
        odd =  s+r.substr(1,s.size()-1);
        
        ll oddNum = stoll(odd);
     
            if(isprime(oddNum)){
                if(oddNum>=n){
                    oddprime=oddNum;
                    break;
                }
                
            }

    }
    
    // even 
    for(ll i=1; i<=1e5; i++){
        string s = to_string(i);
        string r = s;
        reverse(r.begin(),r.end());
        even = s+r;
     
        ll evenNum = stoll(even);
            if(isprime(evenNum)){
                if(evenNum>=n){
                   evenprime=evenNum;
                   break;
                }
             }
    
    }
    
    return min(evenprime, oddprime);
    
    }
};
