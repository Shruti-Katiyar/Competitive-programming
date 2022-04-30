//A. Presents
//https://codeforces.com/problemset/problem/136/A

#include <iostream>

using namespace std;

int main() {
	// your code goes here
	int n,k;
	cin>>n;
	int arr[n+1];//1 say indexing h
	for(int i=1;i<=n;i++){
		cin>>k;
		arr[k]=i;//means 2 no ko gift 1st idx say milla h bw wo 1st idex per h abhi
		
	}
	for(int i=1;i<=n;i++ ){
		cout<<arr[i]<<" ";
	}
	
	//       [2   3      4           1 ] 
	//  idx: 1  2nd   3rdidx       4thidx
	
	//1 friend ko 4th idx ne gift diya
	// 2 ko 1st say milla
	// 3 friend ko 2nd say milla
	// 4 ko 3rd say milla
	
	//op 4 1 2 3
	
	
	return 0;
}
