#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int h1,h2,m1,m2;
	
	char c1,c2;
	
	cin>>h1>>c1>>m1>>h2>>c2>>m2;
// 	cout << h1 << h2 << endl;
    if(h1==0) h1 = 24;
    if(h2==0) h2 = 24;
	
	int rh = abs(h2-h1);
	int rm = ((rh*60)+(m2-m1))/2;
	
	int adh = rm/60;
	
	int adm = rm-(adh*60);
// 	cout << adm << endl;
// 	cout << adh << endl;
	
// // 	cout << h1 << c1 << m1 << endl;
// // 	cout << h2 << c2 << m2 << endl;
	
	
	h1+=adh;
	m1+=adm;

    h1 = h1%24;
    
    if(h1>=1 && h1<=9){
        cout << 0 << h1 << c1;
        if(m1<=9){
            cout << 0 << m1;
        }else{
            cout << m1;
        }
    }else if(h1==0){
        cout << "00" << c1;
        if(m1<=9){
            cout << 0 << m1;
        }else{
            cout << m1;
        }
    }else{
        cout << h1 << c1;
        if(m1<=9){
            cout << 0 << m1;
        }else{
            cout << m1;
        }
    }
	
	
	
	
	
	
	return 0;

}
