#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int k; cin>>k;
	string s; cin>>s;
	string result="";
	
	
	for(char ch: s){
	    
	    if(result.find(ch)==string::npos){
	        result+=ch;
	    }
	}
	
	
	
	bool flag = true;
	string ans="";
    for(char c: result){
        int co = count(s.begin(),s.end(),c);
        if(co%k!=0){
            cout << -1 << endl;
            flag = false;
            break;
        }else{
            int rep = co/k;
            for(int j=0; j<rep; j++){
                ans+=c;
            }
        }
    }
	    
	   
   sort(ans.begin(),ans.end());
   
	if(flag){
	    for(int i=0; i<k; i++){
	        cout << ans;
	    }
	}    
	
	return 0;

}


/*optimized solution using the hashing  */
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
string st="abcdefghijklmnopqrstuvwxyz";
int k; cin>>k;
string s; cin>>s;

vector<int> count(26);

for(char ch: s){
    // cout << ch-'a' << endl;
    
    count[ch-'a']++;
    
}

string ans="";
bool flag = true;

for(int i=0; i<26; i++){
    
    if(count[i]%k!=0){
        flag = false;
        cout << -1;
        break;
    }else{
        int rep = count[i]/k;
        for(int j=0; j<rep; j++){
            ans+=st[i];
        }
    }
    
}

if(flag){
    for(int i=0; i<k; i++){
        cout << ans;
    }
}



return 0;
}
