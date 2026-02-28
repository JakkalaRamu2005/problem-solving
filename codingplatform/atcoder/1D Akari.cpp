#include<bits/stdc++.h>
using namespace std;
 
int main() {
  // write your code here...

    string s; cin>>s;
    int dot=0;
    for(int i=0; i<s.size(); i++){
        if(s[i]=='#'){
            if(dot>=1){
                s[i-1]='o';
                dot=0;
            }
        }else{
            dot++;
        }
    }
    
    if(dot>=1){
        s[s.size()-1]='o';
    }
    
    cout << s << endl;
  
  return 0;
}
