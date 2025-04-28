#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, c;
    cin >> n >> c;
    vector<int> t(n);
    for (int i = 0; i < n; i++)
        cin >> t[i];
    int sum = 1;
    int last = 0;
    for (int i = 1; i < n; i++)
    {
        if (t[i] - t[last] >= c)
        {
            last = i;
            sum++;
        }
    }
    cout << sum << endl;
}