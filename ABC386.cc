#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (a == b && b == c && c != d)
        cout << "Yes" << endl;
    else if (b == c && c == d && a != d)
        cout << "Yes" << endl;
    else if (a == c && c == d && b != d)
        cout << "Yes" << endl;
    else if (a == b && b == d && c != d)
        cout << "Yes" << endl;
    else if (a == b && c == d && b != c)
        cout << "Yes" << endl;
    else if (a == d && b == c && d != b)
        cout << "Yes" << endl;
    else if (a == c && b == d && c != b)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}