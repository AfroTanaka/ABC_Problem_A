#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, s, k;
    cin >> n >> s >> k;
    vector<pair<int, int>> p;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        p.emplace_back(x, y);
    }
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += p[i].first * p[i].second;
    }
    cout << (sum >= s ? sum : sum + k) << endl;
}