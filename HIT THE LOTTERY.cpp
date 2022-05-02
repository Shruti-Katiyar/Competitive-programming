//A. Hit the Lottery
//https://codeforces.com/problemset/problem/996/A

#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int cnt=0;
	while(n){
		if(n>=100){//125
			cnt++;
			n=n-100;
		}
		else if(n>=20){
			cnt++;
			n=n-20;
		}
		else if(n>=10){
			cnt++;
			n=n-10;
		}
		else if(n>=5){
			cnt++;
			n=n-5;
		}
		else {
			cnt++;
			n=n-1;
		}
		
	}
	cout<<cnt;

	
	
	return 0;
	
}

