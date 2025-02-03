#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;
    vector<int> sequence(n);
    for (int i = 0; i < n; i++)
        cin >> sequence.at(i);
    for (int i = 0; i < n; i++)
    {
        if (sequence.at(i) == x)
        {
            cout << i + 1 << endl;
            return 0;
        }
    }
}