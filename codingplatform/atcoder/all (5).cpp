#include <bits/stdc++.h>
using namespace std;

int main() {

int s,a,b,x; cin>>s>>a>>b>>x;
int sum=0;
while(x>0){
    
    if(x>0){
        if(x>=a){
           
            sum+=s*a;
             x-=a;
        }else{
            
            sum+=x*s;
            x = 0;
            break;
        }
    }
    
    if(x>0){
        if(x>=b){
            x-=b;
        }else{
            x = 0;
            break;
        }
    }
    

}

cout << sum << endl;



}
