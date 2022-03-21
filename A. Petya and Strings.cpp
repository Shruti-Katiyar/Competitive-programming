//A. Petya and Strings
//https://codeforces.com/problemset/problem/112/A
#include <iostream>
#include <algorithm>
using namespace std;
string s1, s2;
int main() {
    cin >> s1>> s1;
    for (int i = 0; i < s1.size(); i++) {
        if (s1[i] < 92) {//changing s1 stirng to lower case by adding 32 in it
            s1[i] += 32;
        }
        if (s2[i] < 92) {//changing s2 stirng to lower case by adding 32 in it and then compare lexicographically
            s2[i] += 32;
        }
        //for comparison in lexicographically both the strings should be in same case
    }
    if (s1 < s2) {
        cout << -1;
    } else if (s1> s2) {
        cout << 1;
    } else if (s1 == s2) {
        cout << 0;
    }
}
