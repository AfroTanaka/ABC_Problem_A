#include <bits/stdc++.h>
using namespace std;

int main()
{
    int v, t, s, d;
    cin >> v >> t >> s >> d; // 2, 2, 4, 9
    cout << (v * t <= d && d <= v * s ? "No" : "Yes") << endl;
}