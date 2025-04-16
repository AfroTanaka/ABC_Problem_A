#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int total = 2 * n + 1;
    for (int i = 0; i < total; i++)
    {
        cout << (i % 2 == 0 ? 1 : 0);
    }
    cout << endl;
}