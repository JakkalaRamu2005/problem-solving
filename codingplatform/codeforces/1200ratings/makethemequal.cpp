#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast_io() ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define vi vector<int>
#define vll vector<long long>
// approach is given by the manichandana, and kaustaub, help to solve this problem 
//#zero case 
// if all the letters in the string is equal to the c, then answer is 0]
//#one case 
// if the last is equal to the given c char, the answer is 1 we can keep n 
// or if I find any index, which is equal to the given char and 2*index<n the answer is n 
// else answer is going to be the two n and n-1

void sol(){
   int n; char c; cin>>n; cin>>c;
   
   string s; cin>>s;
   // zero case 
  
   if(string(n,c)==s){
       cout<<0<<"\n";
   }else{
       // if the last char is equalt to the c, I will directly print 
       // the 1 itself 
       if(s[n-1]==c){
           cout<<1<<"\n";
           cout<<n<<"\n";
       }else{
           bool flag=true;
           int index=-1;
           for(int i=n-1; i>=0; i--){
               if(s[i]==c){
                   if(2*(i+1)>n){
                      flag=false;
                      index=i+1;
                      break;
                   }
               }
           }
           // if flag is true, I will get the two indexes 
           // if the flag is false I will only one index,
           if(flag){
               cout<<2<<"\n";
               cout<<n<<" "<<n-1<<"\n";
           }else{
               cout<<1<<"\n";
               cout<<index<<"\n";
           }
       }
   }

}
int main() {
	fast_io()
	int t; cin>>t;
	while(t--) sol();
}
