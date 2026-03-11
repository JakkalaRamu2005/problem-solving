#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
int n1; cin>>n1;

string s  = to_string(n1);
int n = s.size();
int c=0;

for(int i=0; i<n; i++){
    
    if(i+2<n && s[i]=='1' && s[i+1]=='4'&& s[i+2]=='4'){
        c+=3;
        
    }else if(i+1<n && s[i]=='1' && s[i+1]=='4'){
        c+=2;
        
    }else if(s[i]=='1'){
        c+=1;
    }
}


if(n==c){
    cout << "YES" << endl;
}else{
    cout << "NO" << endl;
}

}
