//A. Magnets
//https://codeforces.com/problemset/problem/344/A

#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int cnt=0;
	int arr[n];
	for(int i=0;i<n;i++)
	cin>>arr[i];
	
	for(int i=0;i<n;i++){
		if(arr[i]!=arr[i+1])
		cnt++;
	}
	cout<<cnt<<endl;
	
	

	return 0;
}


