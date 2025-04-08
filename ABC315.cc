#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int i = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
        {
            continue;
        }
        else
            cout << s[i];
    }
    cout << endl;
}