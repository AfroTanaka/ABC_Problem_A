#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> h(n);
    for (int i = 0; i < n; i++)
        cin >> h[i];
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += h[i];
        if (sum > m)
        {
            cout << i << endl;
            return 0;
        }
    }
    cout << h.size() << endl;
}