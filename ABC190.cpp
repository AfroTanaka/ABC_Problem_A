#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (c == 1)
        cout << (b > a ? "Aoki" : "Takahashi") << endl;
    else
        cout << (a > b ? "Takahashi" : "Aoki") << endl;
}