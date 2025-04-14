#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    if (islower(s[0]))
    {
        cout << "No" << endl;
        return 0;
    }
    for (int i = 1; i < s.size(); i++)
    {
        if (isupper(s[i]))
        {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
}