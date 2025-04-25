#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, t, a;
    cin >> n >> t >> a;
    int majority = n / 2 + 1;
    if (t >= majority || a >= majority)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}