//A. Vasya the Hipster
//https://codeforces.com/problemset/problem/581/A

#include<iostream>
using namespace std;
int main(){
	int r,b;
	cin>>r>>b;
	if(r>b)
	cout<<b<<" ";
	else 
	cout<<r<<" ";

  int ans=abs(r-b);
  
  cout<<ans/2;
  
	  

	
	return 0;
	
}

