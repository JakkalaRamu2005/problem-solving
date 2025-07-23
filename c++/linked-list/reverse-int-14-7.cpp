class Solution {
public:
    int reverse(int x) {
        
    long long reverse=0;
    while(x!=0){
        int last_digit = x%10;
        reverse = reverse*10+last_digit;
        x /=10;
    }
    if(pow(-2,31)<=reverse<=pow(2,31)-1){
        return reverse;

    }
    return 0;
    



    }
};