#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, p;
    cin >> n >> m >> p;
    int sum = 0;
    for (int i = m; i <= n; i += p)
    {
        sum++;
    }
    cout << sum << endl;
}