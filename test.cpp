#include <bits/stdc++.h>
using namespace std;

int main()
{
    int v, t, s, d;
    cin >> v >> t >> s >> d; // 2, 2, 4, 9
    int tmp = d / v;
    cout << (t <= tmp && tmp <= s ? "No" : "Yes") << endl;
}