#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << (i % 3 == 0 ? 'x' : 'o');
    }
    cout << endl;
}