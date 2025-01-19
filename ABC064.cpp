#include <bits/stdc++.h>
using namespace std;

int main()
{
    int r, g, b;
    cin >> r >> g >> b;
    r *= 100;
    g *= 10;
    if ((r + g + b) % 4 == 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}