#include <bits/stdc++.h>
using namespace std;





int main(){

string str="banana";
int k = 2;

if(s.length()<k){
    cout << "false";
}
if(s.length()==k){
    cout << "true";
}
int arr[26]={0};
for(int i=0; i<s.size();i++){
    arr[str[i]-'a']+=1;
}
int odd=0;


for(int j: arr){
    if(j%2==1){
        odd+=1;
    }
}
cout << odd<=k;
return 0;

}