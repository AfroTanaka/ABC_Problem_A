#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int start = n - k;
    for (int i = start; i < n; i++)
        cout << a[i] << " ";
    for (int i = 0; i < start; i++)
        cout << a[i] << " ";
    cout << endl;
}