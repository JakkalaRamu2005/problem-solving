#include <bits/stdc++.h>
using namespace std;

int main(){
  
  string s; cin>>s;
  if(s.size()%2==1){
      cout << "No" << endl;
  }else{
      
       unordered_map<char,int> mpp;
          for(char ch: s){
              mpp[ch]++;
          }
        
        int c =0;
        for(int i=1; i<=s.size()/2; i++){
            char a = s[2*i-2];
            char b = s[2*i-1];
            if(a!=b){
                cout << "No" << endl;
            }else{
                c++;
            }
        }
        
        if(c==mpp.size()){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }
  
  
      
  }
 
  
  
  
  
}
