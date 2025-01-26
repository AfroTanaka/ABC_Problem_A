#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, x, t, d;
    cin >> n >> m >> x >> t >> d;
    for (int i = n; i >= 0; i--)
    {
        if (!(x <= i && i <= n))
            t -= d;
        if (i == m)
        {
            cout << t << endl;
            return 0;
        }
    }
}