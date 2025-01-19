#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (abs(c - a) <= d)
        cout << "Yes" << endl;
    else if (abs(c - b) <= d && abs(b - a) <=d)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}