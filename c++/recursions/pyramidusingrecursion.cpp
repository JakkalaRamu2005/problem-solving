#include <bits/stdc++.h>
using namespace std;

void printstars(int i){
    if(i==0){
        return;
    }
    printstars(i-1);
    cout<<"*";
}

void space(int spa){
    if(spa==0){
        return;
    }
    cout<<" ";
    space(spa-1);
}

void print(int i,int n,int stars){
    if(i==n+1){
        return;
    }
    
    space(n-i);
    printstars(stars);
    cout<<endl;

    print(i+1,n,stars+2);
    
}


int main() {
	// your code goes here
	// solving the this question using the recursion, to leaern backtracking and dp.
	
	int n; cin>>n;
	print(1,n,1);
	

}
