#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n,m; cin >>n>>m;
    string s,t; cin>>s>>t;
    int num; cin>>num;
    
    
    for(int i=0; i<num; i++){
        string st; cin >> st;
        int c=0;
        int d=0;
        for(char ch: st){
            if(s.find(ch)){
                c++;
            }
            if(t.find(ch)){
                d++;
            }
        }
        
        if(c==st.size()){
            cout << "Takahashi" << endl;
        }
        if(d==st.size()){
            cout << "Aoki" << endl;
        }
        
        if(c!=st.size() && d!=st.size()){
            cout << "Unknown" << endl;
        }
       
    }
 
    
}