//B. Two Arrays And Swaps
//https://codeforces.com/problemset/problem/1353/B

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
    int main(){
    	int t;
    	cin>>t;
    	//Each move we can choose the minimum element in a, 
		//the maximum element in b and swap them 
	
    	
    	while(t--){
    		int n,k; //k is no of moves
    	    cin>>n>>k;
    	    //5 5 6 6 5
             //1 2 5 4 3
    	    vector<int>a(n);
    	    vector<int>b(n);
    	    for(int i=0;i<n;i++)cin>>a[i];
    	    for(int i=0;i<n;i++)cin>>b[i];
    	    
    	    sort(a.begin(),a.end()); //sort in increasing order //  1 1 2 2 
    	    sort(b.rbegin(),b.rend()); //in decending order   //  5 4 4 4
    	    
    	    for(int i=0;i<k;i++){
    	    	if(a[i]<b[i])//if min value of a is lessthan max value of b till we have to swap 
    	    	   swap(a[i],b[i]); 
    	    	else
    	    	   break;
			}
			int sum=0;//calculate sum of vector a
			for(int i=0;i<n;i++){
				sum+=a[i];
			}
		
		
	       	cout<<sum<<endl;	
    		
		}

   return 0;
}

