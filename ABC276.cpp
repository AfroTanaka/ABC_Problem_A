#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    for (int i = s.size() - 1; i >= 0; i--)
    {
        if (s.at(i) == 'a')
        {
            cout << i + 1 << endl;
            return (0);
        }
    }
    cout << -1 << endl;
}