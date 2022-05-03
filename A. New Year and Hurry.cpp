//A. New Year and Hurry
//https://codeforces.com/problemset/problem/750/A

#include <iostream>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    
    k = 240 - k;
    for (int i = 1; i <= n; i ++ )
    {
        k -= i * 5;
        if (k < 0) 
        {
            cout << i - 1 << endl;
            exit(0);
        }
    }
    
    cout << n << endl;
    
    return 0;
}

