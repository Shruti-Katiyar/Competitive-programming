//A. Nearly Lucky Number
//https://codeforces.com/problemset/problem/110/A

#include<iostream>
using namespace std;

int main()
{
	long long  n,cnt=0;
	cin>>n;
	while(n){
		if(n%10==4 or n%10==7){
		
		   cnt++;
	  }
	n/=10;
}
	if(cnt==4 or cnt==7){
		cout<<"YES"<<endl;
	}
	else
	{
		cout<<"NO"<<endl;
	}
	
		
	}
    
    
 

