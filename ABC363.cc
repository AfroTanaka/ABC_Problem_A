#include <bits/stdc++.h>
using namespace std;

int main()
{
    int r;
    cin >> r;
    if (r <= 99)
        cout << 100 - r << endl;
    else if (r <= 199)
        cout << 200 - r << endl;
    else
        cout << 300 - r << endl;
}