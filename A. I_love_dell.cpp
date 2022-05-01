//A. I_love_%username%
//https://codeforces.com/problemset/problem/155/A

#include<iostream>
using namespace std;
int main(){
	int n,a;
	cin>>n>>a;
	int min=a; //100
	int max=a; //100
	int cnt=0;
 for (int i = 1; i < n; i++) {
        cin >> a;
        if (a > max) {
            max = a;
            cnt++;
        }else if (a < min) {
            min = a;
            cnt++;
        }
    }
    cout << cnt << endl;
}

