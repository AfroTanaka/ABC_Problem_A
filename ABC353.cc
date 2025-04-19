#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> h(n);
    for (int i = 0; i < n; i++)
        cin >> h[i];
    for (int i = 0; i < h.size(); i++)
    {
        if (h[0] < h[i])
        {
            cout << i + 1 << endl;
            return 0;
        }
    }
    cout << -1 << endl;
}