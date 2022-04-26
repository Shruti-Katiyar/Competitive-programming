//A. Vanya and Fence
//https://codeforces.com/problemset/problem/677/A

#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n,h;
	cin>>n>>h;

	int ans=0;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
	
		if(a[i]>h){
			ans+=2;
		}
     	else {
     		ans+=1;
		 }
	}

	cout<<ans; 
	
	return 0;
}
	    
		
	

	
	
	
	
	

