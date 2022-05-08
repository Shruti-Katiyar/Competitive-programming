//A. Soft Drinking
//https://codeforces.com/problemset/problem/151/A

#include<iostream>
using namespace std;

int main(){
	int n, k, l, c, d, p, nl, np;
	cin>>n>>k>>l>>c>>d>>p>>nl>>np; 
	
	 
	int a1= k *l;
	int b1=a1/nl;
	int c1=c*d;
	int d1=p/np;
	int ans=min(b1, min(c1,d1))/n;
	cout<<ans<<endl;
	
	
	
	return 0;
}
