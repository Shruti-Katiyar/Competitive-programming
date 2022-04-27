//A. Calculating Function
//https://codeforces.com/problemset/problem/486/A

#include<iostream>
using namespace std;
int main(){
	long long n;
	cin>>n;
	if(n%2==0)//is n is even
	cout<<n/2<<endl;
	else
	 cout<<-((n+1)/2)<<endl; //when n is odd 

	
	

	return 0;
}


