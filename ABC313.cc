#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> p(n);
    for (int i = 0; i < n; i++)
        cin >> p[i];
    if (n == 1)
    {
        cout << 0 << endl;
        return 0;
    }
    int i = 0;
    for (; i < n - 1; i++)
    {
        if (p[i] != p[i + 1])
            break;
    }
    if (i == n - 1)
    {
        cout << 1 << endl;
        return 0; 
    }
    int target = p[0];
    auto maxE = max_element(p.begin(), p.end());
    int strongest = *maxE;
    sort(p.begin(), p.end());
    if (target == strongest && p[n - 2] != p[n - 1])
        cout << 0 << endl;
    else if (target == strongest && p[n - 2] == p[n - 1])
        cout << 1 << endl;
    else
        cout << strongest - target + 1 << endl;
}