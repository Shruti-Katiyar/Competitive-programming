//A. Hit the Lottery
//https://codeforces.com/problemset/problem/996/A

#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int ans;
	while(n%10==0){
	    ans++;
    	n/=10;
}
cout<<ans;
	
	
	
	
}

