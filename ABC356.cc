#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, l, r;
    cin >> n >> l >> r;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        a[i] = i + 1;
    for (int i = 0; i < l - 1; i++)
        cout << a[i] << " ";
    for (int i = r - 1; i >= l - 1; i--)
        cout << a[i] << " ";
    for (int i = r; i < a.size(); i++)
        cout << a[i] << " ";
    cout << endl;
}