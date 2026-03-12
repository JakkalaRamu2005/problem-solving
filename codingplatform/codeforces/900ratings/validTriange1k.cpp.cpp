#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int a,b,c,d; cin>>a>>b>>c>>d;
	
	bool co1,co2,co3,d1,d2,d3;
	
	co1 = (a+b)>c;
	co2 = (b+c)>a;
	co3 = (c+a)>b;
	
	bool one = co3&&co2&&co1;
	
	d1 = (b+c)>d;
	d2 = (c+d)>b;
	d3 = (b+d)>c;
	
	bool two = d1&&d2&&d3;
	
	bool thi = (a+b)>d && (b+d)>a && (d+a)>b;
	bool fou = (a+c)>d && (c+d)>a && (d+a)>c;
	
	
	
	vector<int> v={a,b,c,d};
	sort(v.begin(),v.end());
	int a1=v[0],b1=v[1],c1=v[2],d0=v[3];
	
	bool c0 = a1+b1==c1;
	bool c2 = a1+b1==d0;
	bool c3 = a1+c1==d0;
	bool c4 = b1+c1==d0;
	
	if(one || two || thi || fou) cout << "TRIANGLE";
	
	else if(c0 || c2 || c3 || c4) cout << "SEGMENT";
	else cout << "IMPOSSIBLE";



return 0;

}




