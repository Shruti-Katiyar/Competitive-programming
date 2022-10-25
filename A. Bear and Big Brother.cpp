//A. Bear and Big Brother
//https://codeforces.com/problemset/problem/791/A

#include<iostream>
using namespace std;
int main(){
	int a,b,cnt=0;
	cin>>a>>b;

	while(a<=b){
		a=a*3;
		b=b*2;
		cnt++;
	
	}

	cout<<cnt;
	
	
	return 0;
	
	
}

