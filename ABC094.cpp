#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, x;
    cin >> a >> b >> x;
    cout << (x - a <= b && a <= x ? "YES" : "NO") << endl;
}