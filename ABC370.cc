#include <bits/stdc++.h>
using namespace std;

int main()
{
    bool l, r;
    cin >> l >> r;
    if (l && !r)
        cout << "Yes" << endl;
    else if (!l && r)
        cout << "No" << endl;
    else
        cout << "Invalid" << endl;
}