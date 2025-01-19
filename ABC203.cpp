#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a != b && b != c && c != a)
        cout << 0 << endl;
    else if (a == b)
        cout << c << endl;
    else if (b == c)
        cout << a << endl;
    else
        cout << b << endl;
}