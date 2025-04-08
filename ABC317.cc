#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, h, x;
    cin >> n >> h >> x;
    vector<int> p(n);
    for (int i = 0; i < n; i++)
        cin >> p[i];
    for (int i = 0; i < n; i++)
    {
        if (p[i] + h >= x)
        {
            cout << i + 1 << endl;
            return 0;
        }
    }
}