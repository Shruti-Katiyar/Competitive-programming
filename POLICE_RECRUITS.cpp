//A. Police Recruits
//https://codeforces.com/problemset/problem/427/A

#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;

	int police=0;
	int crime=0;
	for(int i=0;i<n;i++){
		int a;
		cin>>a;
		if(a>0){//means 1 h 
			police+=a;
		}
		else{
			if(police<1){//measn police  nh h or crime hoga 
			   crime++;
				
			}
			else{
				police--;//agar police thi  or crime hua to police kam hojayeghi
			}
		}
	}
	cout<<crime;

	return 0;
}
