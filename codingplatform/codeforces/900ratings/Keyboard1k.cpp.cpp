#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
string key="qwertyuiopasdfghjkl;zxcvbnm,./";
char dir; cin>>dir;
int n =key.size();
string s; cin>>s;
string result="";
if(dir=='R'){
    
    for(char ch: s){
        for(int i=1; i<n; i++){
            if(key[i]==ch){
                result+=key[i-1];
            }
        }
    }
    
}else{
    for(char ch: s){
        for(int i=0; i<n-1; i++){
            if(key[i]==ch){
                result+=key[i+1];
            }
        }
    }
}


cout << result << endl;


return 0;

}




