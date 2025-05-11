#include <bits/stdc++.h>
using namespace std;

int main()
{
    int r, x;
    cin >> r >> x;
    if (x == 1 && (1600 <= r && r <= 2999))
        cout << "Yes" << endl;
    else if (x == 2 && (1200 <= r && r <= 2399))
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}