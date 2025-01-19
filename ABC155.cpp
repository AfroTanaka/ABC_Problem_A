#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a != b && b != c && c != a)
        cout << "No" << endl;
    else if ( a == b && b == c && c == a)
        cout << "No" << endl;
    else
        cout << "Yes" << endl;
}