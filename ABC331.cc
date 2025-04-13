#include <bits/stdc++.h>
using namespace std;

int main()
{
    int M, D, y, m, d;
    cin >> M >> D >> y >> m >> d;
    if (M == m && D == d)
        cout << y + 1 << " " << 1 << " " << 1 << endl;
    else if (D == d)
        cout << y << " " << m + 1 << " " << 1 << endl;
    else
        cout << y << " " << m << " " << d + 1 << endl;
}