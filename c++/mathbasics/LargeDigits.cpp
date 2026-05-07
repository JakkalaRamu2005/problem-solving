#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main() {
  // write your code here...
  int t; cin>>t;
  while(t--){
      string s; cin>>s;
      string num1="";
      string num2="";
      if(s[0]!='1'){
          cout<<"NO\n";
          continue;
      }else{
          bool flag = true;
          bool carry=false;
          
          
          int xy;
          for(int i=s.size()-1; i>=1; i--){
              bool found=true;
              
              if(carry){
                xy = (10+(s[i]-'0'))-1; 
              }else{
                xy = 10+(s[i]-'0');
                carry=true;
              }
            //   cout<<xy<<" ";
              for(int j=9; j>=5; j--){
                  if(xy-j>=5){
                      int diff = xy-j;
                      num1+=to_string(j);
                      num2+=to_string(diff);
                      carry=true;
                      found=false;
                      break;
                  }
              }
              if(found){
                  flag = false;
                  break;
              }
        
          }
          
          reverse(num1.begin(),num1.end());
          reverse(num2.begin(),num2.end());
        if(num2.size()==num1.size()&&stoll(num1)+stoll(num2)==stoll(s)&&flag){
              cout<<"YES\n";
          }else{
              cout<<"NO\n";
          }
          
          
        //   cout<<num1<<" "<<num2<<"\n";
          
      }
      
      
  }
  
//   YES
// NO
// YES
// YES
// NO
// YES
// NO
// YES
// YES
// NO
// NO

  
  
  return 0;
}
