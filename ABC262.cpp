#include <bits/stdc++.h>
using namespace std;

int main()
{
    int y;
    cin >> y;
    int mod = y % 4;
    if (mod == 2)
        cout << y << endl;
    else if (mod == 0)
        cout << y + 2 << endl;
    else if (mod == 1)
        cout << y + 1 << endl;
    else
        cout << y + 3 << endl;
}