#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, y;
    char c;
    cin >> x >> c >> y;
    if (y <= 2)
        cout << x << '-' << endl;
    else if (y <= 6)
        cout << x << endl;
    else
        cout << x << '+' << endl;
}