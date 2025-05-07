#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "abcdefghijklmnopqrstuvwxyz";
    string t;
    cin >> t;
    set<char> a(t.begin(), t.end());
    int i = 0;
    for (char ch : a)
    {
        if (s[i] != ch)
        {
            cout << s[i] << endl;
            return 0;
        }
        i++;
    }
    cout << s[i] << endl;
}