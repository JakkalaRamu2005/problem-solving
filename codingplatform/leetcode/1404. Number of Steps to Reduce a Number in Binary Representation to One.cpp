class Solution {
public:
    int numSteps(string s) {
     int c =0;
    while(true){
        string s2="";
	    char carry='0';
        if(s=="1"){
            return c;
            break;
        }else if(s[s.size()-1]=='0'){
             s.pop_back();
            c++;
        }else{
           	for(int i=s.size()-1; i>=0; i--){
	    
        	    if(i==s.size()-1){
        	        if(s[i]=='1'){
        	            s[i]='0';
        	            carry='1';
        	        }
        	    }else{
        	        if(s[i]=='1'&&carry=='1'&&i!=0){
        	            s[i]='0';
        	            carry='1';
        	    }else if(s[i]=='0'&&carry=='1'){
        	            s[i]='1';
        	            carry='0';
        	        }else if(s[i]=='1'&&i==0&&carry=='1'){
        	            s2="1";
        	            s[i]='0';
        	            s = s2+s;
        	        }
        	    }
        	  
        	}
        	c++;
        }
        
    }
        
    }
};
