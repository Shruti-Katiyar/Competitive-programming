//A. I Wanna Be the Guy
//https://codeforces.com/problemset/problem/469/A

#include<iostream>
#include<set>
using namespace std;
int main(){
	int n; 
	cin>>n;
	set<int> s;
	
	int p;
	cin>>p;
	for(int i=0;i<p;i++){
		int x;
    	cin>>x;
     	s.insert(x);
    }
    
    int q;
    cin>>q;
    for(int i=0;i<q;i++){
		int y;
    	cin>>y;
     	s.insert(y);
    }
    if(s.size()==n)
     cout<<"I become the guy.";
     else
       cout<<"Oh, my keyboard!";
       

	
	
	return 0;
	
}
