#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, s, t, w;
    cin >> n >> s >> t >> w;
    int best = 0;
    if (s <= w && w <= t)
        best++;
    for (int i = 1; i < n; i++)
    {
        int tmp;
        cin >> tmp;
        w += tmp;
        if (s <= w && w <= t)
            best++;
    }
    cout << best << endl;
}