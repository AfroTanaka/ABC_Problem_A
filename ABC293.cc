#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    for (int i = 1; i <= (s.size() / 2); i++)
    {
        s[(2 * i - 1) - 1] ^= s[2 * i - 1];
        s[2 * i - 1] ^= s[(2 * i - 1) - 1];
        s[(2 * i - 1) - 1] ^= s[2 * i - 1];
    }
    cout << s << endl;
}