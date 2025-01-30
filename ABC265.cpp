#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x, y;
    cin >> x >> y >> n;
    if (x * 3 > y)
    {
        cout << (n % 3 == 0 ? n / 3 * y : (n / 3 * y) + (n % 3 * x)) << endl;
    }
    else
    {
        cout << x * n << endl;
    }
}