#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (a == c)
        cout << (b <= d ? "Takahashi" : "Aoki") << endl;
    else
        cout << (a < c ? "Takahashi" : "Aoki") << endl;
}