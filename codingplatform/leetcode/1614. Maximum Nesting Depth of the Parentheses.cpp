class Solution {
public:
    int maxDepth(string s) {
        int ma=0;
    int c=0;
    for(char ch: s){
        if(ch=='('){
            c++;
        }else if(ch==')'){
            c--;
        }
        
        ma=max(ma,c);
    }
    
    return ma;
    }
};
