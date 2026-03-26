#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here

int n,k; cin>>n>>k;
set<int> s;
for(int i=0; i<=k; i++){
    s.insert(i);
}

int c=0;

for(int i=0; i<n; i++){
    int num; cin>>num;
    
    set<int> equ;
    while(num!=0){
       
        int last = num%10;
        if(s.find(last)!=s.end()){
            equ.insert(last);
        }
        num = num/10;
    }
    
    if(equ.size()==s.size())c++;
}

cout << c << endl;


return 0;
}
