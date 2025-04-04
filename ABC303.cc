#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s, t;
    cin >> s >> t;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == t[i])
            continue;
        else if ((s[i] == '1' && t[i] == 'l') || (s[i] == 'l' && t[i] == '1'))
            continue;
        else if ((s[i] == '0' && t[i] == 'o') || (s[i] == 'o' && t[i] == '0'))
            continue;
        else
        {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
}