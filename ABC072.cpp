#include <bits/stdc++.h>
using namespace std;

int main()
{
    int X, t;
    cin >> X >> t;
    //cout << (X - t > 0 ? X - t : 0) << endl;
    cout << max(X - t, 0) << endl;
}