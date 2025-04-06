#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, p, q;
    cin >> n >> p >> q;
    vector<int> d(n);
    for (int i = 0; i < n; i++)
        cin >> d[i];
    sort(d.begin(), d.end());
    int sum_q = q + d[0];
    cout << (p < sum_q ? p : sum_q) << endl;
}