#include <bits/stdc++.h>
using namespace std;

int main()
{
    int d, t, s;
    cin >> d >> t >> s;
    if (d / (double)s <= t)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}