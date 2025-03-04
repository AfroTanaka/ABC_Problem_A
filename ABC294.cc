#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> sq(n);
    for (int i = 0; i < n; i++)
        cin >> sq[i];
    for (int i = 0; i < n; i++)
    {
        if (sq[i] % 2 == 0)
            cout << sq[i] << " ";
    }
    cout << endl;
}