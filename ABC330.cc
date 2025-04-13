#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, l;
    cin >> n >> l;
    vector<int> p(n);
    for (int i = 0; i < n; i++)
        cin >> p[i];
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (p[i] >= l)
            sum++;
    }
    cout << sum << endl;
}