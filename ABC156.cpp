#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n , r;
    cin >> n >> r;
    if (n >= 10)
        cout << r << endl;
    else
        cout << 100 * (10 - n) + r << endl;
}