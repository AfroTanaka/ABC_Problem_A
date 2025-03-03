#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, p, q, r, s;
    cin >> n >> p >> q >> r >> s;
    int seq[n];
    for (int i = 0; i < n; i++)
        cin >> seq[i];
    for (int i = 0; i <= q - p; i++)
    {
        seq[p - 1 + i] ^= seq[r - 1 + i];
        seq[r - 1 + i] ^= seq[p - 1+ i];
        seq[p - 1 + i] ^= seq[r - 1+ i];
    }
    for (int i = 0; i < n; i++)
        cout << seq[i] << " ";
    cout << endl;
}