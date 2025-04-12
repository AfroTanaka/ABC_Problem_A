#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] == 'a' && s[i + 1] == 'b')
        {
            cout << "Yes" << endl;
            return 0;
        }
        else if (s[i] == 'b' && s[i + 1] == 'a')
        {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
}