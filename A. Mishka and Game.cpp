//A. Mishka and Game
//https://codeforces.com/problemset/problem/703/A

#include <iostream>
using namespace std;
int n, m1, m2; 
int mis, cri;
int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> m1 >> m2;
        if (m1 > m2) {
            mis++;
        } else if(m1 < m2) {
            cri++;
        }
    }
    if (mis > cri) {
        cout << "Mishka";
    } else if (cri > mis) {
        cout << "Chris";
    } else {
        cout << "Friendship is magic!^^";
    }
}
