#include<bits/stdc++.h>
using namespace std;


 void f(int i, string s, string ans, int n, int sum,unordered_map<char,int> &mpp,priority_queue<int> &pq,unordered_map<int,vector<string>> &store,set<int> &unique){
     if(i==n){
         if(ans.size()>0){
         store[sum].push_back(ans);
         if(unique.find(sum)==unique.end()){
             pq.push(sum); 
             unique.insert(sum);
         }
         }
         
         return;
     }
     sum+=mpp[s[i]];
     ans.push_back(s[i]);// pick case 
     f(i+1,s,ans,n,sum,mpp,pq,store,unique);
     ans.pop_back();
     sum-=mpp[s[i]];
     f(i+1,s,ans,n,sum,mpp,pq,store,unique);
 } 
int main() {
  // write your code here...
  string s="ABCDE";
  int a,b,c,d,e; cin>>a>>b>>c>>d>>e;
  unordered_map<char,int> mpp;
  priority_queue<int> pq;
  unordered_map<int,vector<string>> store;
  set<int> unique;
  mpp['A']=a;
  mpp['B']=b;
  mpp['C']=c;
  mpp['D']=d;
  mpp['E']=e;
  int n = s.size();
  string ans="";
  f(0,s,ans,n,0,mpp,pq,store,unique);
// unordered_map<int,
// int co=0;
 while(!pq.empty()){
     vector<string> copy = store[pq.top()];
     sort(copy.begin(),copy.end());
     for(auto x: copy){
         cout<<x<<endl;
        //  co++;
     }
     pq.pop();
 }




  
  return 0;
}
