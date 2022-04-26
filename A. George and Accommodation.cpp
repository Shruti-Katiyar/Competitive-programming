//A. George and Accommodation
//https://codeforces.com/problemset/problem/467/A

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,people,capacity,c=0;
    cin>>t;
    while(t--)
    {
        cin>>people>>capacity;
        if(capacity-people>=2)
            c++;
    }
    cout<<c<<endl;
    return 0;
}

////////////////////


#include <iostream>
using namespace std;

int main() {
int n;
cin>>n;
int count=0;
for(int i=0;i<n;i++){
	int a,b;
	cin>>a>>b;
	if(b-a>=2)
	count++;

}
cout<<count;
return 0;
}






