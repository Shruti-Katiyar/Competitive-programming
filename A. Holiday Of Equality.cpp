//A. Holiday Of Equalityjolbmlgvm
//https://codeforces.com/problemset/problem/758/A

#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int n,sum=0;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
	cin>>a[i];
}
	
	sort(a,a+n);//0 1 2 3 4 

	
	for(int i=0;i<n-1;i++){
        sum+=(a[n-1]-a[i]);
		                                                                                     
}
cout<<sum;

return 0;
}


	
		

