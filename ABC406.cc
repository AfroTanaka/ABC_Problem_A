#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (c > a)
        cout << "No" << endl;
    else if (c == a && d > b)
        cout << "No" << endl;
    else
        cout << "Yes" << endl;
}