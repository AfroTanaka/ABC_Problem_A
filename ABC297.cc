#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, d;
    cin >> n >> d;
    vector<int> t(n);
    for (int i = 0; i < n; i++)
        cin >> t[i];
    for (int i = 0; i < n - 1; i++)
    {
        if (t[i + 1] - t[i] <= d)
        {
            cout << t[i + 1] << endl;
            return 0;
        }
    }
    cout << -1 << endl;
}