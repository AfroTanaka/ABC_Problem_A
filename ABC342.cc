#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    char major_c;
    if (s[0] == s[1])
        major_c = s[0];
    else if (s[1] == s[2])
        major_c = s[1];
    else
        major_c = s[0];
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != major_c)
        {
            cout << i + 1 << endl;
            return 0;
        }
    }
}