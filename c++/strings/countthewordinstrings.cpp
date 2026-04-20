#include<bits/stdc++.h>
using namespace std;
#define vi vector<int> 
#define vll vector<long long> 
#define ll long long 
 
 
 bool check(char ch){
     if(ch>='A'&&ch<='Z'|| ch>='a'&&ch<='z'){
         return true;
     }
     return false;
 }

int main() {
  // write your code here...

 string s; getline(cin,s);

ll ans=0;
 bool flag = false;
 for(char ch: s){
     if(check(ch)){
         if(!flag){
             flag = true;
             ans++;
         }
     }else{
         flag = false;
     }
 }

cout<<ans<<"\n";
  return 0;
}


#include<bits/stdc++.h>
using namespace std;
#define vi vector<int> 
#define vll vector<long long> 
#define ll long long 
 
int main() {
  // write your code here...
 string special =".?,!";
 string s; getline(cin,s);
 string result;
 for(char ch: s){
     if(special.find(ch)==string::npos){
         result+=ch;
     }
 }
 
 stringstream ss(result);
 string word;
 ll ans=0;
 while(ss>>word){
    //  cout<<word<<" ";
     ans++;
 }
 
 cout<<ans<<"\n";



  
  
 
  
  return 0;
}
