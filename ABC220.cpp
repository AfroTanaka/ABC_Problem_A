#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >>c;
    if (b / c * c >= a)
        cout << b / c * c << endl;
    else
        cout << -1 << endl;
}