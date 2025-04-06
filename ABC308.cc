#include <bits/stdc++.h>
using namespace std;

bool check_mono_inc(vector<int> s)
{
    for (int i = 0; i < 7; i++)
    {
        if (s[i] > s[i + 1])
            return false;
    }
    return true;
}

int main()
{
    vector<int> s(8);
    for (int i = 0; i < 8; i++)
        cin >> s[i];
    for (int i = 0; i < 8; i++)
    {
        if (!(100 <= s[i] && s[i] <= 675))
        {
            cout << "No" << endl;
            return 0;
        }
        if (s[i] % 25)
        {
            cout << "No" << endl;
            return 0;
        }
    }
    if (!check_mono_inc(s))
    {
        cout << "No" << endl;
    }
    else
        cout << "Yes" << endl;
}