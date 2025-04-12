#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;
    vector<int> p(n);
    for (int i = 0; i < n; i++)
        cin >> p[i];
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (p[i] <= x)
            sum += p[i];
    }
    cout << sum << endl;
}