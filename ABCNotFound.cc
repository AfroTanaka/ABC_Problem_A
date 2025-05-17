#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    vector<int> a(26, 0);
    for (char c : s)
    {
        if ('a' <= c && c <= 'z')
        {
            a[c - 'a']++;
        }
    }
    for (int i = 0; i < 26; i++)
    {
        if (a[i] == 0)
        {
            cout << (char)(i + 'a') << endl;
            return 0;
        }
    }
}