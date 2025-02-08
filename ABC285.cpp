#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    if (a == 1 && b == 2)
        cout << "Yes" << endl;
    else if (a == 1 && b == 3)
        cout << "Yes" << endl;
    else if (a == 2 && (b == 4 || b == 5))
        cout << "Yes" << endl;
    else if (a == 4 && (b == 8 || b == 9))
        cout << "Yes" << endl;
    else if (a == 5 && (b == 10 || b == 11))
        cout << "Yes" << endl;
    else if (a == 3 && (b == 6 || b == 7))
        cout << "Yes" << endl;
    else if (a == 6 && (b == 12 || b == 13))
        cout << "Yes" << endl;
    else if (a == 7 && (b == 14 || b == 15))
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}